/* Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са. */
#include <stdio.h>
#include <stdlib.h>
#include "libstack.h"

/* Използвал съм stack, за да съхранявам в случай, че има отварящи скоби. Инклуднал съм libstack.h, където са прототипите на struct Stack и функциите. Функциите се намират в stack.c в същата папка.*/

int check_brackets(const char *filename, Stack *st);

int main(int argc, char **argv)
{
	Stack *brackets = newStack(100); /* create a stack to contain the last open parantheses */

	if (argc < 2)
	{
		printf("Usage:\n\t%s file.txt\n", argv[0]);
		exit(0);
	}

	check_brackets(argv[1], brackets);

	return 0;
}

int check_brackets(const char *filename, Stack *st)
{
	char c, top;
	int line = 1;
	FILE *fp;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("File does not exist\n");
		return -1;
	}

	do
	{
		c = fgetc(fp);
		if (c == EOF)
			break;

		if (c == '\n')
			line++;

		if (c == '(' || c == '{' || c == '[')
		{
			push(st, c);
		}

		if (isEmpty(st))
		{
			continue;
		}
		else if (c == ')' || c == '}' || c == ']')
		{
			top = peek(st);
			if (c == ')' && top == '(' ||
				c == '}' && top == '{' ||
				c == ']' && top == '[')
			{
				pop(st);
			}
			else
			{
				printf("Parantheses on line %d are not valid\n", line);
				exit(1);
			}
		}
		else
		{
			printf("Parantheses on line %d are not valid\n", line);
			exit(1);
		}

	} while (1);

	printf("There were no errors found.\n");
	return 1;

	fclose(fp);
}