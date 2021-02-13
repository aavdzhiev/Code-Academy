/* Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите */
#include <stdio.h>
#include <stdlib.h>

void create_arr(int *p, unsigned size);
void fill_elements(int *p, unsigned size);

int main(void) {
	int *arr = NULL;
	unsigned size = 0;

	printf("Enter number of elements: \n");
    scanf("%d", &size);
	create_arr(arr, size);
	fill_elements(arr, size);

	return 0;
}

void create_arr(int *p, unsigned size) {
	p = (int *) malloc(size * sizeof(int));

	if (NULL == p) {
		printf("Allocation memory error.");
		exit(1);
	} else {
		printf("Memory successfully alocated: %p\n", p);
	}
}

void fill_elements(int *p, unsigned size) {
	int i, *start;
	start = p;

	for (i = 0; i < size; i++) {
		printf("Enter element %d: \n", i);
		scanf(" %d", p);
		printf("%d ", *p);
		p++;
	}

	
}
