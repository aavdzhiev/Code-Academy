/* Задача 21. Напишете функция, която сортира лексикографски (по
азбучен ред) масив от символи (char[]). Използвайте “Метода на
мехурчето”, потърсете в интернет */
#include <stdio.h>

void printArray(char arr[], int size);
void swap(char *p1, char *p2);
void bubbleSort(char arr[], int n);

int main() {
	char arr[] = {'s', 'a', 'c', 'd', 'l', 'f', 'z', 'b'};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	
	printf("Sorted array: \n");
	printArray(arr, n);

	return 0;
}

void printArray(char arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%c ", arr[i]);
	printf("\n");
}

void swap(char *p1, char *p2) {
	char temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void bubbleSort(char arr[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}
