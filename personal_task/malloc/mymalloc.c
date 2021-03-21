#include "mymalloc.h"

long ms_from_beginning(void)
{
  long ms;
  time_t sec, nano;
  struct timespec now;

  clock_gettime(CLOCK_REALTIME, &now);

  sec = now.tv_sec - begin.tv_sec;         /* calculate seconds diff */
  nano = now.tv_nsec - begin.tv_nsec;      /* calculate nanoseconds diff */
  ms = (sec * 1000) + round(nano / 1.0e6); /* Convert nanoseconds to milliseconds */

  return ms;
}

void initialize()
{
  free_list->size = MAX_SIZE - sizeof(block_t);
  free_list->free = 1;
  free_list->next = NULL;
}

void split(block_t *block, size_t requested_size)
{
  block_t *new = (void *)((void *)block + requested_size + sizeof(block_t));

  new->size = block->size - requested_size - sizeof(block_t);
  new->free = 1;
  new->next = block->next;

  block->next = new;
  block->size = requested_size;
  block->free = 0;
  block->allocated_at = ms_from_beginning();
}
void write_log(const char *fname, void *param, enum type t)
{
  fp = fopen(LOG_NAME, "a+");
  long time = ms_from_beginning();

  if (t == INT)
  {
    fprintf(fp, "called %s at %ld ms with param %d\n", fname, time, (*(int *)param));
  }
  else if (t == PTR)
  {
    fprintf(fp, "called %s at %ld ms with param %p\n", fname, time, param);
  }

  fclose(fp);
}

void *my_malloc(size_t requested_size)
{
  write_log(__func__, &requested_size, INT);
  if (!free_list->size)
  {
    initialize();
  }

  block_t *current = free_list;
  void *result;

  while ((current->size < requested_size || current->free == 0) && current->next != NULL)
  {
    current = current->next;
  }

  if (current->size == requested_size)
  {
    current->free = 0;
    current->allocated_at = ms_from_beginning();
    result = (void *)++current;
  }
  else if (current->size > (requested_size + sizeof(block_t)))
  {
    split(current, requested_size);
    result = (void *)++current;
  }
  else
  {
    result = NULL;
  }

  return result;
}

void merge()
{
  block_t *cur;
  cur = free_list;

  while (cur != NULL && cur->next != NULL)
  {
    if (cur->free && cur->next->free)
    {
      cur->size += cur->next->size + sizeof(block_t);
      block_t *deleted = cur->next;
      cur->next = cur->next->next;
      deleted = NULL;
    }

    cur = cur->next;
  }
}

void my_free(void *p)
{
  write_log(__func__, p, PTR);
  if (((void *)memory <= p) && (p <= (void *)(memory + MAX_SIZE)))
  {
    struct block *curr = p;
    --curr;
    curr->free = 1;
    curr->allocated_at = 0;

    merge();
  }
}

void print_memory(const block_t *blk)
{
  do
  {
    printf("address: %p, size: %ld, free: %d, next: %p, allocated_at: %ld ms\n", blk, blk->size, blk->free, blk->next, blk->allocated_at);
    blk = blk->next;
  } while (blk != NULL);
}

void print_allocated(FILE *fp, const block_t *blk)
{
  fp = fopen(LOG_NAME, "a+");
  fprintf(fp, "---------------\nAllocated blocks that are not freed: \n");
  do
  {
    if (blk->free == 0)
    {
      printf("address: %p, size: %ld, free: %d, next: %p, allocated_at: %ld ms\n", blk, blk->size, blk->free, blk->next, blk->allocated_at);
      fprintf(fp, "address: %p, size: %ld, free: %d, next: %p, allocated_at: %ld ms\n", blk, blk->size, blk->free, blk->next, blk->allocated_at);
    }
    blk = blk->next;
  } while (blk != NULL);

  fclose(fp);
}