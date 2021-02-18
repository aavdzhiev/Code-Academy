/* Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск. */
#include <stdio.h>

int check_anagram(char[], char[]);

int main() {
	char a[100], b[100];

	printf("Enter two strings: \n");
	gets(a);
	gets(b);

	if (check_anagram(a, b) == 1)
		printf("The strings are anagrams\n");
	else
		printf("The strings are not anagrams\n");

	return 0;
}

int check_anagram(char a[], char b[]) {
	int first[26] = {0}, second[26] = {0}, c = 0;

	/* Calculating frequency of characters of first string */
	while (a[c] != '\0') {
		first[a[c] - 'a']++; /* decrement the letter in the string so we get the indexes of the new array. if the letter is the same it will always refer to the same index, then we increment the value on that index */
		c++;
	}

	c = 0;
	while (b[c] != '\0') {
		second[b[c] - 'a']++;
		c++;
	}

	/* Comparing frequency of characters */
	for (c = 0; c < 26; c++) {
		if (first[c] != second[c])
			return 0;
	}

	return 1;
}