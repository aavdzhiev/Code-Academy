/* Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */
#include<stdio.h>

int main(void) {
	int arr1[5] = {0};

	for (int i = 0; i < 5; i++) {
		printf("Input a number: \n");
		scanf("%d", &arr1[i]);
	}

	/* print the array */
	for (int i = 0; i < 5; i++) {
		if (i == 4) {
			printf("%d", (arr1[i]));
		} else {
			printf("%d, ", (arr1[i]));
		}
	}
	

	return 0;
}