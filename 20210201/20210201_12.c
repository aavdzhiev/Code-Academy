/* Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция) */
#include<stdio.h>

int any(const char *s1, const char *s2);

int main(void) {
	char *str1 = "This is my strng.";
	char *str2 = "is";

	printf("First appearance of str2 is at: %d\n", any(str1, str2));

	return 0;
}

int any(const char *s1, const char *s2) {
	int i, j;

	for (i = 0; s2[i] != 0; i++) {
		for (j = 0; s1[j] != 0; j++) {
			if (s2[i] == s1[j]) {
				return j;
			}
		}
	}
	return -1;
}