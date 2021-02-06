/* Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j. */
#include<stdio.h>
#define SIZE 500

void our_strcat(char *dest, char *source);

int main(void) {
	char dest[SIZE] = "Hello";
	char src[] = " + world!";

	our_strcat(dest, src);
	printf("destination string: %s\n", dest);
	
	return 0;
}

void our_strcat(char *dest, char *source) {
	for (; *dest != '\0'; dest++) {
		;
	}

	do {
		*dest = *source;
		++dest;
		++source;
	} while (*source != '\0');

	++dest;
	*dest = '\0';
}