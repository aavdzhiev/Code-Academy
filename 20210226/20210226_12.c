/* Задача 12. Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define NAMELEN 16
#define EMPNUM 10 /* number of employees */
#define MAX_SALARY 3000
#define MIN_SALARY 650
int employee_id = 0;

typedef struct Employee
{
	int id;
	char *fname;
	char *mname;
	char *lname;
	char *position;
	double salary;
	int work_exp;
	struct Employee *boss;
} t_Employee;

void getinfo(t_Employee *pst)
{
	char temp[NAMELEN];
	int work_experience = (rand() % 35);
	double sal = ((double)rand() / RAND_MAX) * (MAX_SALARY - MIN_SALARY) + MIN_SALARY;

	pst->id = employee_id++;

	printf("Enter firstname: \n");
	scanf("%s", &temp);
	pst->fname = (char *)malloc(strlen(temp) + 1);
	strcpy(pst->fname, temp);

	printf("Enter middle name: \n");
	scanf("%s", &temp);
	pst->mname = (char *)malloc(strlen(temp) + 1);
	strcpy(pst->mname, temp);

	printf("Enter lastname: \n");
	scanf("%s", &temp);
	pst->lname = (char *)malloc(strlen(temp) + 1);
	strcpy(pst->lname, temp);

	printf("Enter position: \n");
	scanf("%s", &temp);
	pst->position = (char *)malloc(strlen(temp) + 1);
	strcpy(pst->position, temp);

	pst->work_exp = work_experience;

	pst->salary = sal;
}

int main(void)
{
	srand(time(NULL));
	int i, y;
	t_Employee *employees[EMPNUM];

	for (i = 0; i < EMPNUM; i++) /* allocate memory for each member of employees */
	{
		employees[i] = (struct Employee *)malloc(sizeof(t_Employee));
	}

	for (i = 0; i < EMPNUM; i++) /* populate the employees array with data */
	{
		getinfo(employees[i]);
	}

	for (i = 0; i < EMPNUM; i++)
	{ /* assign each employee a pointer to another employee */
		y = rand() % (EMPNUM - 1);
		employees[i]->boss = employees[y];
	}

	for (i = 0; i < EMPNUM; i++) /* print each employee info */
	{
		printf("%d, %s, %s, %s, %s, %.2lf, %d, boss: %s\n", employees[i]->id, employees[i]->fname, employees[i]->mname, employees[i]->lname,
			   employees[i]->position, employees[i]->salary, employees[i]->work_exp, (employees[i]->boss)->fname);
	}

	for (i = 0; i < EMPNUM; i++) /* free memory for each member of employees */
	{
		free(employees[i]);
	}

	return 0;
}