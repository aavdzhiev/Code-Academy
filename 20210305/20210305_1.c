/* Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. */
#include <stdio.h>
#include <stdlib.h>
#define VARNAME(n) #n

typedef struct storage
{
    int longBoards;
    int shortBoards;
    int smallBrackets;
    int largeBrackets;
    int screws;

} storage;

void populate_storage(storage *s)
{
    printf("Input long boards: \n");
    scanf(" %d", &s->longBoards);
    printf("Input short boards: \n");
    scanf(" %d", &s->shortBoards);
    printf("Input small brackets: \n");
    scanf(" %d", &s->smallBrackets);
    printf("Input large brackets: \n");
    scanf(" %d", &s->largeBrackets);
    printf("Input screws: \n");
    scanf(" %d", &s->screws);
}

void print_storage(storage *s)
{
    printf("Long boards: %d\n", s->longBoards);
    printf("Short boards: %d\n", s->shortBoards);
    printf("Small brackets: %d\n", s->smallBrackets);
    printf("Large brackets: %d\n", s->largeBrackets);
    printf("Screws: %d\n", s->screws);
}

int shelves_number(storage *s)
{
    int shelves = 0;
    while (s->longBoards >= 4 && s->shortBoards >= 6 && s->smallBrackets >= 12 && s->largeBrackets >= 2 && s->screws >= 14)
    {
        s->longBoards -= 4;
        s->shortBoards -= 6;
        s->smallBrackets -= 12;
        s->largeBrackets -= 2;
        s->screws -= 14;
        shelves++;
    }

    return shelves;
}

int main()
{
    storage *storage1 = (storage *)malloc(sizeof(storage));

    populate_storage(storage1);
    printf("%d shelves can be made with the materials in %s\n", shelves_number(storage1), VARNAME(storage1));
    printf("Materials left: \n");
    print_storage(storage1);

    free(storage1);

    return 0;
}