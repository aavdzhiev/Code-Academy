#include "mymalloc.h"

FILE *fp = NULL; /* global file pointer variable for the log */
block_t *free_list = (void *)memory;

int main(void)
{

    clock_gettime(CLOCK_REALTIME, &begin); /* gets the at progr start */

    fp = fopen(LOG_NAME, "w"); /* makes sure a log is creaed and cleaned on every start */
    if (fp == NULL)
    {
        printf("Error opening log file!\n");
    }
    fclose(fp);

    printf("Memory is not yet initialised: \n");
    print_memory(free_list);

    printf("\n\nallocate 5b\n");
    int *p1 = my_malloc(5);
    print_memory(free_list);
    sleep(1.5);

    printf("\n\nallocate again 5b\n");
    int *p2 = my_malloc(5);
    print_memory(free_list);

    char *string1 = my_malloc(20 * sizeof(char));
    strcpy(string1, "Some string!");

    char *string2 = my_malloc(20 * sizeof(char));
    strcpy(string2, "A second string!");

    printf("\n\nfree p2\n");
    my_free(p2);
    print_memory(free_list);

    printf("\n\nAllocated memory blocks that were not freed: \n");
    print_allocated(fp, free_list);

    return 0;
}