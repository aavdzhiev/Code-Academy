/* Задача 5 Разширяване на заделена памет с realloc */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p = NULL;
	unsigned uSize = 0;
	printf("\nEnter size: ");
	scanf("%u", &uSize);
	p = (int *)malloc(uSize * sizeof(int));
	
	if (NULL == p) {
		printf("Allocation memory error!\n");
		exit(1);
	}

	printf("Addresses of allocated memory: %p\n", p);
	printf("\nEnter the new size: ");
	scanf("%u", &uSize);
	p = realloc(p, uSize * sizeof(int));
	
	if (NULL == p) {
		printf("Reallocation memory error!\n");
		exit(2);
	}

	printf("Addresses of reallocated memory: %p\n", p);
	free(p);

	return 0;
}