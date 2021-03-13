#include <stdio.h>
#include "liblists.h"

void init()
{
    start = NULL;
};

int add(int data)
{
    node_t *p = start;
    start = (node_t *)malloc(sizeof(node_t));

    if (!start)
        return -1;

    start->data = data;
    start->next = p;

    return 0;
}

int addAfter(int n, int k)
{
    node_t *q;
    node_t *p = start;
    while (p->data != k)
        p = p->next;

    q = (node_t *)malloc(sizeof(node_t));
    q->data = n;
    q->next = p->next;
    p->next = q;

    return 0;
}

int addPrev(int n, int k)
{
    node_t *q;
    node_t *p = start;
    while (p->data != k)
        p = p->next;

    q = (node_t *)malloc(sizeof(node_t));
    q->next = p->next;
    q->data = p->data;
    p->next = q;
    p->data = n;

    return 0;
}

int addEnd(int n)
{
    node_t *p = start;
    node_t *q = (node_t *)malloc(sizeof(node_t));
    if (!q)
        return -1;

    while (p->next != NULL)
        p = p->next;

    p->next = q;
    q->data = n;
    q->next = NULL;

    return 0;
}

int dellFirst(int *n)
{
    node_t *p = start;
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

node_t *dellElemReturnAfter(int *n, int k)
{
    node_t *p = start;
    node_t *q;
    while (p->data != k)
    {
        if (p->next == NULL)
        {
            return NULL;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    *n = p->data;
    q->next = p->next;
    free(p);
    return q->next;
}

void printAfter(node_t *curr)
{
    node_t *p = curr;
    while (p != NULL)
    {
        printf("%d, ", p->data);
        p = p->next;
    }
}

void dellEnd(int *n)
{
    node_t *q;
    node_t *p = start;

    while (p->next != NULL)
    {
        q = p;
        p = p->next;
    }

    *n = p->data;
    q->next = NULL;

    free(p);
}

node_t *search_iter(int k)
{
    node_t *p = start;
    while (p->data != k)
    {
        if (p->next == NULL)
        {
            return NULL;
        }
        else
        {
            p = p->next;
        }
    }
    return p;
}