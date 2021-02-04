/* Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1. */
#include <stdio.h>

int linSearch(int *a, int length, int d);

int main(void)
{
	int searchIn[10] = {2, 5, 19, 22, 34, 789, 34, 3, 7, 10};
	int searchFor = 0;

	printf("Input a number to see if it's in the array: ");
	scanf("%d", &searchFor);

	int result = linSearch(searchIn, 10, searchFor);

	if (result != -1) {
		printf("%d is in the array on position %d", searchFor, result);
	} else {
		printf("%d is not in the array.", searchFor);
	}

	return 0;
}

int linSearch(int *a, int length, int d) {
	int i;

	for (i = 0; i < length; i++) {
		if (a[i] == d) {
			return i;
		}
	}

	return -1;
}