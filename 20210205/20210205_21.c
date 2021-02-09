/* Задача 20. Проверете дали сумата от елементите на два тримерни
масива са еднакви. Използвайте задачата която сумира елементите на
масив, която правихме по горе за да получите едно сумите на двата
тримерни масива и след това сравнявайте сумите. Тази задача е
подходяща при наличието на голям брой данни (матрици тримерно) те да
бъдат подредени по някакъв признак. */
#include <stdio.h>

void printArray(int arr[], int size);
void swap(int *p1, int *p2);
void bubbleSort(int arr[], int n);

int main() {
	int arr[] = {23, 66, 11, 12, 18, 2, 10, 55};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	
	printf("Sorted array: \n");
	printArray(arr, n);

	return 0;
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void swap(int *p1, int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void bubbleSort(int arr[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}
