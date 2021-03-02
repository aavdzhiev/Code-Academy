/* Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата. */
#include <stdio.h>

int main(void) {
	typedef int array[];
	array arr1 = {32, 44, 55, 66};

	int arrSize = sizeof(arr1) / sizeof(int);
	printf("My array: ");
	for (int i = 0; i < arrSize; i++) {
		printf("%d ",arr1[i]);
	}

	return 0;
}