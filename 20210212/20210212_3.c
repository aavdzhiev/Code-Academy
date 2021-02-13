/* Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата */
#include<stdio.h>
#include <stdlib.h>


void create_arr(int *p, unsigned size);
void change_arr_size(int *p, unsigned new_size);

int main(void) {
	int *arr = NULL;
	unsigned size = 0;
	char choice = 'Y';

	printf("To create a new array enter its size: \n");
	scanf("%u", &size);

	create_arr(arr, size);

	printf("Do you want to expand your array? [Y/n] ");
	scanf(" %c", &choice);
	if (choice == 'Y' || choice == 'y') {
		printf("\nEnter the new size: ");
		scanf("%u", &size);
		change_arr_size(arr, size);
	} else {
		printf("Program closed.");
	}

	free(arr);

	return 0;
}

void create_arr(int *p, unsigned size) {
	p = (int *)malloc(size * sizeof(int));
	
	if (NULL == p) {
		printf("Allocation memory error!\n");
		exit(1);
	}

	printf("Addresses of allocated memory: %p\n", p);
	
}

void change_arr_size(int *p, unsigned new_size) {
	p = realloc(p, new_size * sizeof(int));

	if (NULL == p) {
		printf("Allocation memory error!\n");
		exit(2);
	}

	printf("Addresses of reallocated memory: %p\n", p);
}