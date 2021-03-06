/* Задача 16.
Имаме 2 сортирани масиви А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново.
Насоки: Проверяваме от кой масив да вземем следващия елемент за
слагане в масива /цикъл и проверка./  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_LEN 88

void fillRand(int arr[], int len);
void print_arr(int *a, int len);
int cmpfunc (const void * a, const void * b);
void copySorted(int *dest, int *src1, int *src2, int lenDest, int lenSrc);

int main() {
	srand(time(NULL));
	int arr1[ARR_LEN] = {0}, arr2[ARR_LEN] = {0}, arr3[ARR_LEN * 2] = {0};

	printf("Arr 1: \n");
	fillRand(arr1, ARR_LEN);
	qsort(arr1, ARR_LEN, sizeof(int), cmpfunc);
	print_arr(arr1, ARR_LEN);
	printf("\nArr 2: \n");
	fillRand(arr2, ARR_LEN);
	qsort(arr2, ARR_LEN, sizeof(int), cmpfunc);
	print_arr(arr2, ARR_LEN);
	printf("\nArr 3: \n");
	copySorted(arr3, arr1, arr2, ARR_LEN * 2, ARR_LEN);
	print_arr(arr3, ARR_LEN * 2);

	return 0;
}

void copySorted(int *dest, int *src1, int *src2, int lenDest, int lenSrc) {
	int i = 0, j = 0, k = 0;

	while (i < lenSrc && j < lenSrc) {
		if (src1[i] < src2[j]) {
			dest[k++] = src1[i++];
		} else {
			dest[k++] = src2[j++];
		}
	}

	while (i < lenSrc) {
		dest[k++] = src1[i++];
	}

	while (i < lenSrc) {
		dest[k++] = src2[j++];
	}

}


void fillRand(int arr[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		arr[i] = rand() % 100;
	}
}

void print_arr(int *a, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}