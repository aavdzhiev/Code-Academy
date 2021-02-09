/* Задача 12. Дефинирайте и инициализирайте едномерен масив с 5
елемента. Следкато сте готови, направете въвеждане на данните в масива,
като четете от потребителя със scanf. */
#include<stdio.h>

int main(void) {
	int arr[5] = {0};

	for (int i = 0; i < 5; i++) {
		printf("Input a number: \n");
		scanf("%d", &arr[i]);
	}

	/* print the array */
	for (int i = 0; i < 5; i++) {
		if (i == 4) {
			printf("%d", (arr[i]));
		} else {
			printf("%d, ", (arr[i]));
		}
	}

	return 0;
}