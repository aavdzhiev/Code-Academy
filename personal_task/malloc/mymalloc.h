#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <unistd.h>
#include <sys/time.h>
#include <math.h>
#include <string.h>
#include <inttypes.h>

#define MAX_SIZE 20000 /* Max size of the 'memory' */
#define LOG_NAME "log.txt"

typedef struct block
{
  size_t size;        /* The size of the block */
  int free;           /* Is it free */
  struct block *next; /* Pointer to the next block */
  long allocated_at;  /* Time of allocation since start of prg */
} block_t;

extern block_t *free_list; /* This is the beginning of the memory linked list */

char memory[MAX_SIZE]; /* The 'memory' */

FILE *fp;
struct timespec begin; /* Stores the time in the start of the program */

enum type
{
  INT,
  PTR
};

/* Calculates the milliseconds since the start of the program */
long ms_from_beginning(void); 

/* Initialises the free list variable */
void initialize();

/* Takes a memory block as param and splits it to the requested size */
void split(block_t *block, size_t requested_size);

/* Merges two consecutive memory blocks if they are free */
void merge();

/* Takes size_t and allocates this much 'memory'. Returns void * or NULL if fails to allocate space */
void *my_malloc(size_t requested_size);

void *my_realloc(void *p, size_t requested_size);

/* Frees 'memory' */
void my_free(void *p);

/* Print a memory block's info */
void print_memory(const block_t *blk);

/* Iterate through the linked list and print the blocks that were not freed */
void print_allocated(FILE *fp, const block_t *blk);

/* Write details about the funciton calls in the log */
void write_log(const char *fname, void *param, enum type t);