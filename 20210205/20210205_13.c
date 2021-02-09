/* Задача 13. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */
#include<stdio.h>

int main(void) {
	int arr1[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("Input a number: \n");
			scanf("%d", &arr1[i][j]);
		}
	}

	/* print the array */
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			printf("arr1 [%d] [%d]: %d\n", i, j,
				   arr1[i][j]);
		}

	return 0;
}