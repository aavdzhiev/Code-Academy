/*Задача 12. Напишете програма, която дефинира масив [10][10][10], 
пълни го със случайни числа и смята средното аритметично, само с един цикъл.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Не е довършена. Ако може, ми изпратете решението, тъй като ме затрудни. */

void fill3D(int (*matrix)[10][10]);
void print3D(int (*arr)[10][10], int lenght)
{
	int i, j, k;
	for (i = 0; i < lenght; i++)
	{
		for (j = 0; j < lenght; j++)
		{
			for (k = 0; k < lenght; k++)
			{
				printf("%d ", arr[i][j][k]);
				if (k == lenght)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
}

int main(void)
{
	int a[10][10][10] = {};
	time_t t;
	int i;
	srand((unsigned)time(&t));

	int N = (sizeof(a) / sizeof(int));

	int arr[3][3][3] =
		{
			{{10, 20, 30}, {40, 50, 60}, {70, 80, 90}}, //elements of block 1
			{{11, 22, 33}, {44, 55, 66}, {77, 88, 99}}, //elements of block 2
			{{12, 23, 34}, {45, 56, 67}, {78, 89, 90}}	//elements of block 3
		};

	// print3D(arr, 3);

	// fill3D(a);
	print3D(a, 10);

	return 0;
}

void fill3D(int (*matrix)[10][10])
{
	int i, ***p = (int ***)matrix;
	for (i = 0; i < 1000; i++)
	{
		***p = rand() % 50;
		p++;
	}
}