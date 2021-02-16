/* Задача 21.  Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“ */
#include <stdio.h>

void replace(char *s, char a, char b);

int main(void) {
	char s1[] = {"Baba, kaka, mama"};

	printf("s1 before replace: %s\n", s1);
	replace(s1, 'a', 'o');
	printf("s1 AFTER replace: %s\n", s1);

	return 0;
}

void replace(char *s, char a, char b) {
	while (*s) {
		if (*s == a) {
			*s = b;
		}
		s++;
	}
}