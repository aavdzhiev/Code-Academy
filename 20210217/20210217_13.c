/* Задача 13.
Напишете програма, която да прочете низ от потребителя и да го обърне в обратен ред.
Например: 'xyz' да стане 'zyx' */
#include <stdio.h>
#define MAX 1000

void reverse(char *s, int len);

int main(void) {
	char s[MAX];
	reverse(s, MAX);

	return 0;
}

void reverse(char *s, int len) {
	char c;
	int l = 0;

	/* get user input */
	while ((c = getchar()) != '\n') {
		l += 1;
		*s = c;
		s++;
	}

	*s = '\0';
	s--;

	while (l > 0) {
		putchar(*s);
		s--;
		l--;
	}
}