/* Задача 8.
Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free()) */
#include <stdio.h>
#include <stdlib.h>

void alloca_arr(int *p, int size);

int main(void) {
	int *arr = NULL;
	int n = 0;

	printf("Enter the number of elements of the array: \n");
	scanf("%d", &n);
	
	alloca_arr(arr, n);

	return 0;
}

void alloca_arr(int *p, int n) {
	p = (int *)alloca(n);

	if (NULL == p) {
		printf("Allocation error.");
		exit(1);
	} else {
		printf("Memory allocated succesfully: %p\n", p);
	}

}