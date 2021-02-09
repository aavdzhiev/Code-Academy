/* Задача 20. Проверете дали сумата от елементите на два тримерни
масива са еднакви. Използвайте задачата която сумира елементите на
масив, която правихме по горе за да получите едно сумите на двата
тримерни масива и след това сравнявайте сумите. Тази задача е
подходяща при наличието на голям брой данни (матрици тримерно) те да
бъдат подредени по някакъв признак. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 2
#define COL1 2
#define COL2 3

void fillRandNums(int a[ROWS][COL1][COL2]);
int sum3D(int a[ROWS][COL1][COL2]);
void compare(int a, int b);

int main(void)
{
	int arr1[ROWS][COL1][COL2];
	int arr2[ROWS][COL1][COL2];
	int arr3[ROWS][COL1][COL2] = {{{1, 1, 1}, {2, 2, 2}}, {{1, 1, 1}, {2, 2, 2}}};
	int arr4[ROWS][COL1][COL2] = {{{1, 1, 1}, {2, 2, 2}}, {{1, 1, 1}, {2, 2, 2}}};
	int sum1, sum2, sum3, sum4;

	/* fill the two arrays with random numbers from 1 to 20 */
	fillRandNums(arr1);
	fillRandNums(arr2);
	/* sum of arr1, arr2, arr3, arr4 */
	sum1 = sum3D(arr1);
	sum2 = sum3D(arr2);
	sum3 = sum3D(arr3);
	sum4 = sum3D(arr4);

	printf("sum3 %d", sum2 );

	printf("Compare arr1 and arr2 -> ");
	compare(sum1, sum2);
	printf("Compare arr2 and arr4 -> ");
	compare(sum1, sum2);

	return 0;
}

void fillRandNums(int a[ROWS][COL1][COL2])
{
	int i, j, k;
	time_t t;				   /* a datatype for storing system time values */
	srand((unsigned)time(&t)); /* intialises random number generator */

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COL1; j++)
		{
			for (k = 0; k < COL2; k++)
			{
				a[i][j][k] = rand() % 20;
			}
		}
	}
}

int sum3D(int a[ROWS][COL1][COL2])
{
	int sum, i, j, k;
	sum = 0;

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COL1; j++)
		{
			for (k = 0; k < COL2; k++)
			{
				sum += a[i][j][k];
			}
		}
	}

	return sum;
}

void compare(int a, int b)
{
	if (a == b)
	{
		printf("Arrays have the same sum of elements.\n");
	}
	else
	{
		printf("Arrays don't have the same sum of elements.\n");
	}
}
