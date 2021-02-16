/* Задача 15.  Напишете програма, която чете съобщение и го принтира в обратен ред. */
#include <stdio.h>

void print_reverse(char *m);

int main(void) {
	char message[] = {};
	print_reverse(message);
	
	return 0;
}

void print_reverse(char *m) {
	char c;
	int len = 0;

	while ((c = getchar()) != '\n') {
		*m = c;
		m++;
		len++;
	}

	*m = '\0';

	while (len > 0) {
		--m;
		putchar(*m);
		len--;
	}
}

