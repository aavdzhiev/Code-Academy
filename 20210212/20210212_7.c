/* Задача 7. Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет. */
#include <stdio.h>
#include <stdlib.h>

void calloc_arr(int *p, int n);

int main(void) {
	int i, n, *arr = NULL;

	printf("Number of elements of the array: \n");
	scanf(" %d", &n);
	calloc_arr(arr, n);

	free(arr);

	return 0;
}

void calloc_arr(int *p, int n) {
	p = (int *)calloc(n, sizeof(int));

	if (NULL == p) {
		printf("Allocation memory error.");
		exit(1);
	}
	else {
		printf("Memory allocated succesfully: %p\n", p);
	}
}
