/* Задача 12.
Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.
Насоки:
1. Въвежда се дължина на паролата, колко символа от нея са малки
букви (a..z), големи букви( A..Z ), колко са цифрите (0..9), колко
специални символи (@#$%!^&*).
2. Използва се генератор на случайни числа за символите и тяхната
позиция */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char genCapitals();
char genNums();
char genLower();
char genSymbols();
char * passGen(int len, int cap, int low, int sym);

int main(void) {
	srand(time(NULL));
	int len, cap, low, sym;

	printf("Input pass length: ");
	scanf("%d", &len);

	printf("%s", passGen(len, cap, low, sym));

	return 0;
}

char genCapitals() {
    return (rand() % 25) + 65;
}

char genNums() {
	return (rand() % 8) + 48;
}

char genLower() {
	return (rand() % 25) + 97;
}

char genSymbols() {
	char *symbols = "@#$%%!^&*";
	int i = rand() % 10;
	return symbols[i];
}

char * passGen(int len, int cap, int low, int sym) {
	int i, r;
	char *pass;
	char (*character)(void) = NULL;
	pass = malloc(len);

	if (NULL == pass) {
		printf("Array not allocated!");
		return NULL;
	}

	for (i = 0; i < len; i++) {
		r = (rand() % 4 + 1);

		switch (r) {
		case 1:
			character = genCapitals;
			break;
		case 2:
			character = genLower;
			break;
		case 3:
			character = genNums;
			break;
		case 4:
			character = genSymbols;
			break;
		default:
			printf("Error!");
	}
		pass[i] = character();
	}

	return pass;
}

