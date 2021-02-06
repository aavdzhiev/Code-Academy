/* Задача 5. Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat() предполага, че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка. Но не сме разгледали динамичното заделяне на памет с
malloc. */
#include<stdio.h>
#define SIZE 500
void our_strcat(char *s, char *t);

int main(void) {
	char str1[500] = "abcdef";
	char str2[] = " + concatenated";

	our_strcat(str1, str2);
	printf("str1: %s\n", str1);
	
	return 0;
}

void our_strcat(char *s, char *t) {
	int i, j;

	for (i = 0; s[i] != '\0'; i++) {
		s++;
	}
	s++;
	
	for (j = 0; t[j] != '\0'; j++) {
		*s = t[j];
		s++;
	}
	printf("%c\n", *s);

	*s = '\0';
}