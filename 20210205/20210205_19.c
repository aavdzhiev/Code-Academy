/* Задача 19 Дефинирайте 2 масива с по 10 елемента, А и В, напълнете ги
със случайни числа от 0 до 20, умножете всеки от елементите А[i]*В[i] и
напишете резултата на екрана.
Вариация: Модифицирайте така, че да извежда резултат от целочислено
деление. (Каква проверка трябва да направите?) */
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_SIZE 10

void division(int *a, int *b, int size);
int * product(int *a, int *b, int size);
void fillRandNums(int *a, int *b);
void printArray(int *a, int size);

int main(void) {
	int arr1[ARR_SIZE];
	int arr2[ARR_SIZE];
	int *p;

	fillRandNums(arr1, arr2);
	p = product(arr1, arr2, ARR_SIZE);

	printf("arr1: ");
	printArray(arr1, ARR_SIZE);
	printf("arr2: ");
	printArray(arr2, ARR_SIZE);
	printf("product of arr1 and arr2: \n"); 
	printArray(p, ARR_SIZE);
	printf("\ndivision of arr1 and arr2: \n"); 
	division(arr1, arr2, ARR_SIZE);

	return 0;
}

void division(int *a, int *b, int size) { /* printf the division of elements of the arrays */
	int zeros;
	zeros = 0;
	for(int i = 0; i < size; i++) {
		if (b[i] == 0) {
			zeros = 1;
			break;
		}
	}

	if (zeros) { /* check if there are zeros in the second array */
		printf("There are zeroes in the second array. Program terminated.");
	} else {
		for(int i = 0; i < size; i++) {
			printf("%d ", a[i] / b[i]);
		}
	}
}

int * product(int *a, int *b, int size) { /* return a static array to get the product of two arrays */
	static int res[ARR_SIZE];

	for(int i = 0; i < size; i++) {
		res[i] = a[i] * b[i];
	}

	return res;
}

void fillRandNums(int *a, int *b) {
	int i;
	time_t t; /* a datatype for storing system time values */

	srand((unsigned) time(&t)); /* intialises random number generator */

	for (i = 0; i < ARR_SIZE; i++) { /* generate the rand num and assign it to each element in each array */
		a[i] = rand() % 20;
		b[i] = rand() % 20;
	}
}

void printArray(int *a, int size) { /* gets arr and arr size, prints the arr */
	int i;
	for(i = 0; i < size; i++) {
		if (i != (size - 1)) {
			printf("%d, ", a[i]);
		} else {
			printf("%d\n", a[i]);
		}
	}
}