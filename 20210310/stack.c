#include <stdio.h>
#include <stdlib.h>
#include "libstack.h"

Stack *newStack(int size)
{
	Stack *st = (Stack *)malloc(size * sizeof(Stack));

	if (NULL == st)
	{
		printf("create: Allocation error.");
		exit(1);
	}

	st->top = -1;
	st->contents = (char *)malloc(sizeof(char) * size);
	st->size = size;

	if (NULL == st->contents)
	{
		printf("create: Allocation error.");
		exit(1);
	}

	return st;
}

int isFull(Stack *st)
{
	return st->top == st->size - 1;
}

int isEmpty(Stack *st)
{
	return st->top == -1;
};

char peek(Stack *st)
{
	return st->contents[st->top];
}

void push(Stack *st, char x)
{
	if (isFull(st))
	{
		printf("Stack is full.\n");
		return;
	}
	st->contents[++st->top] = x;
}

char pop(Stack *st)
{
	if (isEmpty(st))
	{
		printf("Underflow\nProgram Terminated\n");
		exit(1);
	}

	return st->contents[st->top--];
}

void destroy(Stack *st) {
	free(st->contents);
	free(st);
}