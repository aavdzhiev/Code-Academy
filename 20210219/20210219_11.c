/* Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга. */
#include <stdio.h>
#include <string.h>

struct employee {
	char name[26];
	struct employee *superior;
};

int main(void) {
	struct employee petar, ivan;

	strcpy(petar.name, "Petar");
	petar.superior = &ivan;

	strcpy(ivan.name, "Petar");
	ivan.superior = &petar;

	printf("name: %s\n", petar.name);
	printf("name: %s\n", petar.name);

	return 0;
}