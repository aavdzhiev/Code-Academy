/* Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не. */
#include<stdio.h>

void isEven(int n);

int main(void) {
	int n;
	
	printf("Enter a number: \n");
	scanf("%d", &n);
	isEven(n);

	return 0;
}

void isEven(int n) {
	if (n % 2 == 0) {
		printf("%d is even\n", n);
	} else {
		printf("%d is odd\n", n);
	}
}
