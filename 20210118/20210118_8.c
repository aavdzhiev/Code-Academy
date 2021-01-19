/* Упражнение 8*. Напишете функция int isLetter(char c), която проверява дали
подадения параметър е буква или не е буква от ASCII таблицата. */
#include <stdio.h>
#include <ctype.h>

void isLetter(char c);
void isLetter2(char c);

int main(void)
{
	isLetter('a');
	isLetter('0');
	isLetter('2');
	isLetter('d');
	isLetter('Z');
	isLetter('A');
	isLetter('%');
	isLetter(' ');
	isLetter(64);
	printf("------------\n");
	isLetter2('a');
	isLetter2('c');
	isLetter2('a');
	isLetter2('f');
	isLetter2(0);
	isLetter2(31);
	isLetter2('*');

	return 0;
}

void isLetter(char c)
{
	// Сравняваме дали character-а се намира между a и z или A и Z в ASCII таблицата
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
		printf("%c is a letter.\n", c);
	}
	else {
		printf("%c is NOT a letter.\n", c);
	}
}

void isLetter2(char c) {
	if(isalpha(c)) {
		printf("%c is a letter.\n", c);
	} else {
		printf("%c is NOT a letter.\n", c);
	}
}
