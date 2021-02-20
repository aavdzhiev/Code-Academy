/* Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник. */
#include <stdio.h>
#define MAXBUF 50
#define EMPLOYEES 10

struct employee
{
	int id;
	char name[MAXBUF];
	char surname[MAXBUF];
	char position[MAXBUF];
	int workExp;
	double salary;
	struct employee *superior;
};

struct employee createEmployee(int id, const char *name, const char *surname, const char *position, int workExp) {
	struct employee temp;
	temp.id = id;
	strcpy(temp.name, name);
	strcpy(temp.surname, surname);
	strcpy(temp.position, position);
	temp.workExp = workExp;
	double salary;
}


struct employee * createEmployee(int n) {
	int i, id, workExp;
	double salary;
	char name[MAXBUF], surname[MAXBUF], position[MAXBUF];

	static struct employee r[10];

	for (i = 0; i < n; i++) {
		printf("Enter employee name: ");
		scanf("%s", &name);
		r[i] =	createEmployee();
	}

	return r;
}

void printEmployee(struct employee *e)
{
	printf("ID: %d\n", e->id);
	printf("Name: %s\n", e->name);
	printf("Surname: %s\n", e->surname);
	printf("Position: %s\n", e->position);
	printf("Work experience(years): %d\n", e->workExp);
	// printf("Superior: %s\n", ((e->superior).name));
}


int main(void) {
	int i;
	char n[MAXBUF];
	struct employee petar;
	// struct employee arr[] = createEmployee(2);
	struct employee test[10];
	test[0] = petar;
	printf("%s", test[0]);
	


	return 0;
}