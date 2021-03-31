/* Задача за контрол на динамичната памет
Напишете свои функции заместващи malloc, realloc, free, които да контролират заделянето и освобождаването на памет. 
Функциите трябва да поддържат списък на заделената памет и да проверяват дали се освобождава. 

Трябва да се поддържа журнален файл на всяко извикване на горните три функции със техните параметри върнатия резултат. 
В края на програмата всички блокове, които не са били освободени трябва да бъдат изведени на екрана или в съответен файл. 

За всеки блок с неосвободена памет трябва да се изведе допълнителна информация,
кога е бил заделен блока (микро секунди от стартиране на програмата), 
големината му и промените, които са направени в него. */

#include "mymalloc.h"
#define STR_LEN 20

FILE *fp = NULL; /* global file pointer variable for the log */

/* Points to the main block of memory which is initially free and not allocated */
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

    printf("---Initial memory---");
    print_memory(free_list);

    printf("\n\nallocate 1 integer\n");
    int *p1 = my_malloc(sizeof(int));
    if (p1 == NULL) {
        printf("Allocation error error on line %d\n", __LINE__ - 2);
    }
    print_memory(free_list);
    sleep(1.5);

    printf("\n\nallocate an integer again\n");
    int *p2 = my_malloc(sizeof(int));
    if (p2 == NULL) {
        printf("Allocation error error.\n");
    }
    print_memory(free_list);

    printf("\n\nAllocate string1 and string 2: \n");
    char *string1 = my_malloc(STR_LEN * sizeof(char));
    if (string1 == NULL) {
        printf("Allocation error error.\n");
    }
    strcpy(string1, "Some string!");

    char *string2 = my_malloc(STR_LEN * sizeof(char));
    if (string2 == NULL) {
        printf("Allocation error error.\n");
    }
    strcpy(string2, "A second string!");
    print_memory(free_list);
    printf("\n\nRealloc string 2: \n");
    string2 = (char *)my_realloc(string2, 30);
    printf("%s\n", string2);

    printf("\n\nfree p2\n");
    my_free(p2);
    print_memory(free_list);

    printf("\n\nAllocated memory blocks that were not freed: \n");
    print_allocated(fp, free_list);

    return 0;
}