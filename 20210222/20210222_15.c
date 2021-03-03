/* Задача 15.
Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

int main(void)
{
	char buff[255];
	time_t t;
	srand((unsigned)time(&t));
	int i, r;
	struct employee employees[20];
	struct employee *ptr = employees;
	char temp[32] = "Employee";
	double salary = 256.33;

	printf("id,name,salary,status\n");
	for (i = 0; i < 20; i++, ptr++)
	{
		r = rand() % 4;
		switch (r)
		{
		case 0:
			ptr->s = ACTIVE;
			break;
		case 1:
			ptr->s = INACTIVE;
			break;
		case 2:
			ptr->s = SUSPENDED;
			break;
		case 3:
			ptr->s = BLOCKED;
			break;
		}
		salary += 30;
		ptr->id = i;
		ptr->salary = salary;
		strcpy(ptr->name, temp);

		printf("%d, %s, %lf, %d\n", ptr->id, ptr->name, ptr->salary, ptr->s);
	}

	return 0;
}
