/* Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s. */
#include<stdio.h>
#define SIZE 500

void our_strcat(char *dest, char *source, int n);

int main(void) {
	char dest[SIZE] = "Hello ";
	char src[] = "world!";

	our_strcat(dest, src, 8);
	printf("destination string: %s\n", dest);
	
	return 0;
}

void our_strcat(char *dest, char *source, int n) {
	for (; *dest != '\0'; dest++) {
		;
	}

	 while (n && *source != '\0') {
		*dest = *source;
		++dest;
		++source;
		--n;
	}

	++dest;
	*dest = '\0';
}