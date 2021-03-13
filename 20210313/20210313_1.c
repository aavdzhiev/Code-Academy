/* Задача 1. Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък: */
#include <stdio.h>

extern node_st *start;

typedef struct node
{
    int data;
    node_st *next;
} node_st;

void init()
{
    start = NULL;
};

int add(int data)
{
    node_st *p = start;
    start = (node_st *)malloc(sizeof(node_st));
    if (!start)
        return -1;

    start->data = data;
    start->next = p;

    return 0;
}

int del_first(int *n)
{
    node_st *p = start;
    if (start)
    {
        *n = start->data;
        start = start->next;
        free(p);

        return 1;
    }
    else
        return 0;
}