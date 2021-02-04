/* Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30. */
#include<stdio.h>

int sum30(void);

int main(void) {
	printf("Sum of numbers from 1 to 30 is: %d\n", sum30());

	return 0;
}

int sum30(void) {
	int sum = 0;
	for (int i = 1; i <= 30; i++) {
		sum += i;
	}

	return sum;
}
