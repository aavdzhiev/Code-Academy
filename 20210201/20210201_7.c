/* Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна */
#include <stdio.h>

int recursiveSum(int n);

int main(void) {
	int n = 30;
	printf("Sum of numbers from 1 to 30 is: %d\n", recursiveSum(n));

	return 0;
}

int recursiveSum(int n)
{
	if (n != 0) {
		return n + recursiveSum(n - 1);
	} else {
		return n;
	}
}
