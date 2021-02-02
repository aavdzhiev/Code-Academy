/* Задача 4. Направете функцията :
void copy(char *to, char *from), която копира една
последователност от символи в друга. Декларирайте масива,
който ще копирате така char *from = "abcdef" или така char from[]
= "abcdef" това е едно и също. Първото е пойнтер, сочещ към
низова константа, второто е началото на масив, сочещ към нея.
Заделете място за масива, в който ще копирате тези символи с
декларация
char to[16]; Копирайте символ по символ масива from[] в to[],
докато не стигнете знака '\0' терминираща нула – знак за край на
стринг. Терминиращият символ '\0' има стойност 0. */
#include <stdio.h>

void copy(char *to, char *from);
void printstr(char *s); /* include it so we can use it to print the strings */

int main(void)
{
	char from[] = "abcdef";
	char to[16];

	printstr("'To' before copy() has no content: \n");
	printstr(to);
	/* Call the copy function */
	copy(to, from);
	printstr("'To' has content after copy(): \n");
	printstr(to);

	return 0;
}

void copy(char *to, char *from) {
	int i = 0;
	while (from[i] != '\0') {
		to[i] = from[i];
		i++;
	}
}

void printstr(char *s) {
	int i = 0;
	while (s[i] != '\0') {
		printf("%c", s[i]);
		i++;
	}
}