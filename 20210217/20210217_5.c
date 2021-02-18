/* Задача 5.
Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни. */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROWS 5
#define COLS 5

int * findNumIndex(int a[ROWS][COLS]); /* returns a pointer to the address of the first index in the array where there is a number from 1 to 5 */
void fillRandNums(int a[ROWS][COLS]); /* fills 2d arr with rand nums */
void print2D(int a[ROWS][COLS]); 


int main(void) {
	int arr[ROWS][COLS];
	fillRandNums(arr);
	print2D(arr);
	printf("The address of the first index where there is a number from 1 to 5 is: %p\n", findNumIndex(arr));

	return 0;
}

int * findNumIndex(int a[ROWS][COLS]) {
	int i, j;
	static int *indexes = NULL;
	indexes = (int *)malloc(sizeof(int));

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			if (a[i][j] >= 1 && a[i][j] <= 5) {
				indexes = &a[i][j];
				break;
			};
		}
	}
	
	return indexes;
}

void print2D(int a[ROWS][COLS]) {
	int i, j;

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void fillRandNums(int a[ROWS][COLS]) {
	srand((unsigned) time(NULL));
	int i, j;

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			a[i][j] = rand() % 10;
		}
	}
}