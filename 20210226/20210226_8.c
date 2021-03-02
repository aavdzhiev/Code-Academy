/* Задача 8.
Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
struct Stack{
int *contents;
int top;
};
Stack create(int size); void destroy(Stack s);
int pop(); void push()
int top()
int isFull(); int isEmpty(void) */
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int *contents;
	int top;
	int size;
} Stack;

Stack *newStack(int size)
{
	Stack *st = (Stack *)malloc(size * sizeof(Stack));

	if (NULL == st)
	{
		printf("create: Allocation error.");
		exit(1);
	}

	st->top = -1;
	st->contents = (int *)malloc(sizeof(int) * size);
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

int peek(Stack *st)
{
	return st->contents[st->top];
}

void push(Stack *st, int x)
{
	if (isFull(st))
	{
		printf("Stack is full.\n");
		return;
	}
	st->contents[++st->top] = x;
}

int pop(Stack *st)
{
	if (isEmpty(st))
	{
		printf("Underflow\nProgram Terminated\n");
		exit(1);
	}

	printf("Removing %d\n", peek(st));

	return st->contents[st->top--];
}

void destroy(Stack *st) {
	free(st->contents);
	free(st);
}

int main(void)
{
	Stack *stack1 = newStack(4);
	printf("Is stack1 empty: ");
	if (isEmpty(stack1))
	{
		printf("YES\n");
	}
	else
		printf("NO\n");

	printf("Is stack1 full: %d\n", isFull(stack1));
	printf("Is stack1 empty: %d\n", isEmpty(stack1));

	printf("Push 1 as value \n");
	push(stack1, 1);
	printf("Top is: %d\n", peek(stack1));
	printf("Push 34 as value \n");
	push(stack1, 34);
	printf("Top is: %d\n", peek(stack1));
	pop(stack1);
	printf("Top is: %d\n", peek(stack1));

	return 0;
}
