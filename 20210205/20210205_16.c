/* Задача 16. Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана. */
#include<stdio.h>
#define SIZE 4

int * product(int *a, int *b);

int main(void) {
	int *p;
	int arr1[SIZE] = {1, 2, 3, 4};
	int arr2[SIZE] = {5, 6, 7, 8};
	p = product(arr1, arr2);

    printf("The product of arr1 and arr2 is: \n");
	for (int i = 0; i <= SIZE; i++) { /* print p */
		printf("%d ", *p++);
	}

	return 0;
}

/* тук не знам дали точно така е редно да се направи. другият вариант беше с void
и просто printf елементите, но исках да видя как да върна array */
int * product(int *a, int *b) { /* return a static array to get the product of two arrays */
	static int res[SIZE];
	for(int i = 0; i < SIZE; i++) {
		res[i] = *a++ * *b++;
	}

	return res;
}