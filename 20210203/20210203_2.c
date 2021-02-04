/* Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край. */
#include <stdio.h>

void printArr(int *arr, int length);
void printArr2(int *arr);

int main(void) {
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr2[] = {20, 21, 22, 23, 24, 25};

	printf("arr1: \n");
    printArr(arr1, 10);
	printf("\narr2: \n");
	printArr2(arr2);
 
    return 0;
}

void printArr(int *arr, int length) {
    int i;
	for (i = 0; i < length; i++) {
		printf("%d\n", arr[i]);
	}
}

/* alternative function if we don't know the length */
void printArr2(int *arr) {
	while(*arr != '\0') {
		printf("%d\n", *arr);
		arr++;
	}
}
