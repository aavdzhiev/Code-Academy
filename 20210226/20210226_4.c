/* Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност. */
#include <stdio.h>

int sum(int *a, int *b) {
	return *a + *b;
}

int main(void) {
	typedef int number;
	number a = 12;
	number b = 5;
	number *p1 = &a;
	number *p2 = &b;

	printf("Result a + b: %d\n", sum(p1, p2));

	return 0;
}