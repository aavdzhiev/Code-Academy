/* Задача 11.
Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата. */
#include <stdio.h>
#include <string.h>

union u {
	int n1;
	int n2;
	char c;
};

int main(void) {
	union u union1 = {.n1 = -7};
	printf("n1: %d\n", union1.n1);
	union1.n2 = 10;
	printf("n2: %d\n", union1.n2);
	union1.c = 'c';
	printf("c: %c\n", union1.c);

	printf("n1: %d, n2: %d, c: %c\n", union1.n1, union1.n2, union1.c);

	return 0;
}