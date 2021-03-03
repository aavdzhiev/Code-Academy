/* Задача 9.
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define VariableName(name) #name /* print the variable name */

typedef struct numchar
{
	enum type
	{
		number,
		string
	} tp;

	union numStr
	{
		int n;
		char s[64];
	} ns;
} numchar;

void convert(numchar *p)
{ /* convert the contents of p depending if it's a string or a number */
	if (p->tp == number)
	{
		itoa(p->ns.n, p->ns.s, 10);
		p->tp = string;
	}
	else if (p->tp == string)
	{
		p->ns.n = atoi(p->ns.s);
		p->tp = number;
	}
}

void printContent(numchar *p)
{
	if (p->tp == number)
	{
		printf("type of %s is number: %d\n",VariableName(p), p->ns.n);
	}
	else if (p->tp == string)
	{
		printf("type of %s is string: %s", VariableName(p), p->ns.s);
	}
}

int main(void)
{
	numchar *p = (numchar *)malloc(sizeof(numchar));
	p->tp = number;
	p->ns.n = 3;
	printContent(p);

	printf("Convert p from number to string and print: \n");
	convert(p); /* convert the contents of p from number to string */
	printContent(p);

	free(p);

	return 0;
}