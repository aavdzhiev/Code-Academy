/* Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b).  */
#include<stdio.h>

void my_swap(int *a, int *b);

int main(void) {
	int a, b;
	a = 1;
	b = 2;

	printf("Input a: ");
	scanf("%d", &a);
	printf("Input b: ");
	scanf("%d", &b);
	printf("a = %d, b = %d\n", a, b);
	my_swap(&a, &b);
	printf("*swapped*\n");
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void my_swap(int *a, int *b) {
	*a = *a + *b; 
	*b = *a - *b; 
	*a = *a - *b;
}