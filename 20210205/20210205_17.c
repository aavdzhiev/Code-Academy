/* Задача 17. Напишете програма за умножение на два двумерни
масиви, елемент по елемент. */
#include<stdio.h>
#define ARR_ROWS 2
#define ARR_COLS 3


void product2D(int a[ARR_ROWS][ARR_COLS], int b[ARR_ROWS][ARR_COLS]);

int main(void) {
	int arr1[ARR_ROWS][ARR_COLS] = {{1, 2, 3}, {4, 5, 6}};
	int arr2[ARR_ROWS][ARR_COLS] = {{7, 8, 9}, {10, 11, 12}};

	printf("Product of arr1 and arr2 is: \n");
	product2D(arr1, arr2);

	return 0;
}

void product2D(int a[ARR_ROWS][ARR_COLS], int b[ARR_ROWS][ARR_COLS]) {
	int i, j;
	for (i = 0; i < ARR_ROWS; i++) {
		for (j = 0; j < ARR_COLS; j++) {
			printf("%d ", a[i][j] * b[i][j]);
		}
	}
}