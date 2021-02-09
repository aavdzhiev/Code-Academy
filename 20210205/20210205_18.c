/* Задача 18. Напишете програма за умножение на два тримерни
масива, елемент по елемент. */
#include<stdio.h>
#define ROWS 2
#define COL1 2
#define COL2 3


void product3D(int a[ROWS][COL1][COL2], int b[ROWS][COL1][COL2]);

int main(void) {
	int arr1[ROWS][COL1][COL2] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};
	int arr2[ROWS][COL1][COL2] = {{{2, 3, 4}, {5, 6, 7}}, {{8, 9, 10}, {11, 12, 13}}};

	printf("Product of arr1 and arr2 is: \n");
	product3D(arr1, arr2);

	return 0;
}

void product3D(int a[ROWS][COL1][COL2], int b[ROWS][COL1][COL2]) {
	int i, j, k;
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COL1; j++) {
			for (k = 0; k < COL2; k++) {
				printf("%d ", a[i][j][k] * b[i][j][k]);
			}
		}
	}
}