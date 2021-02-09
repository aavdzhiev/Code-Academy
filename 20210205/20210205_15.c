/* Задача 15. Сумирайте елементите на двумерен масив и намерете
средното по редове и колони. (Представете си, че са ученици в класове). */
#include<stdio.h>
#define COLUMNS 3
#define ROWS 2

int main(void) {
	int arr[ROWS][COLUMNS] = {{1, 2, 3}, {5, 6, 7}};
	int sum, i, j, elements;
	double mean;

	elements = ROWS * COLUMNS;
	mean = 0.0;

	for (i = 0; i < ROWS; i++) { /* sum all elements of the array */
		for (j = 0; j < COLUMNS; j++) {
			mean += arr[i][j];
		}
	}
	
	mean = mean / elements;

	printf("Mean is: %.6lf\n", mean);
	

	return 0;
}