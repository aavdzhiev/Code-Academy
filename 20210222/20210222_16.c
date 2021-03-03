/* Задача 16.
Използвайки предната задача, напишете програма, която да чете
от стандартния вход CSV формат на описаната структура и да
попълва масив от 20 структури. Пример: prog2 < structs20.cvs */
#include <stdio.h>
#define MAXCHAR 1024

enum status
{
    ACTIVE,
    INACTIVE,
    SUSPENDED,
    BLOCKED
};

struct employee
{
    int id;
    char name[32];
    double salary;
    enum status s;
};

int main()
{
    int i = 0;
    struct employee employees[20];

    while (!feof(stdin))
    {
        scanf(" %d, %s, %lf, %d", &employees[i].id, &employees[i].name, employees[i].salary, employees[i].s);
        i++;
    }

    for (i = 0; i < 20; i++)
    {
        printf("%d, %s, %lf, %d\n", employees[i].id, employees[i].name, employees[i].salary, employees[i].s);
    }

    return 0;
}