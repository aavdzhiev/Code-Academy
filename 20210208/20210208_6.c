/* 6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */
#include<stdio.h>
#include <limits.h>

int largest_num(int *a, int size);

int main(void) {
	int arr[5] = {1, 2, 16, 4, 5};
	int arrNegative[4] = {-235, -100, -2, -5};

	printf("Largest element of arr is: %d\n", largest_num(arr, 5));
	printf("Largest element of arrNegative is: %d\n", largest_num(arrNegative, 4));

	return 0;
}

int largest_num(int *a, int size) {
	int largest;
	largest = INT_MIN; /* make sure we handle negative numbers too */

	for (int i = 0; i < size; i++) {
		if (a[i] > largest)
			largest = a[i];
	}
	
	return largest;
}
