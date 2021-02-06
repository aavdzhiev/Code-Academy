/* Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от нула > 0 */
#include<stdio.h>

int our_strcmp(char *s, char *t);

int main(void) {
	char str1[] = "abCd", str2[] = "abcd", str3[] = "abcd";
	char str4[] = {1, 'g', 3, 4, 5};
	char str5[] = {1, 'c', 3, 5, 6};

	printf("str1 compared to str2: %d\n", our_strcmp(str1, str2));
	printf("str2 compared to str3: %d\n", our_strcmp(str2, str3));
	printf("str4 compared to str5: %d\n", our_strcmp(str4, str5));

	return 0;
}

/* assuming the two strings are the same length */
int our_strcmp(char *s, char *t) {
	do {
		if (*s != *t) /* if the values are different return the difference */
			return *s - *t;
		s++;
		t++;

	} while (*s != '\0' && *t != '\0');

	return 0;
 }