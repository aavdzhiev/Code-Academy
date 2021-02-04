/* Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки. */
#include <stdio.h>

void lower(char *s);

int main(void)
{
	char s1[50] = "This string SHOULD NOT HAVE UPPERCASE!";

	printf("s1 before lower(): %s\n", s1);
	lower(s1);
	printf("s1 after lower(): %s\n", s1);

	return 0;
}

void lower(char *s) {
	while (*s != '\0') {
		if (*s >= 65 && *s <= 90) {
			*s = *s+ 32;
		}
		s++;
	}
}