/* Задача 10.
Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct numchar
{
	int num;
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

void printContent(numchar *p)
{
	if (p->tp == number)
	{
		printf("type is number: %d\n", p->ns.n);
	}
	else if (p->tp == string)
	{
		printf("type is string: %s", p->ns.s);
	}
}

int main(void)
{
	numchar *p = (numchar *)malloc(sizeof(numchar));
	p->tp = number;
	p->ns.n = 4;
	printContent(p);

	printf("Change to string..\n");
	p->tp = string;
	strcpy(p->ns.s, "String 1");
	printContent(p);

	free(p);

	return 0;
}