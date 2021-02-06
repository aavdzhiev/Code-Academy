/* Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s . */
#include<stdio.h>

void mystrncpy(char *dest, char *src, int n);

int main(void) {
	char dest[] = "        destination string";
	char src[] = "changed source string";

	mystrncpy(dest, src, 7);
	printf("dest[] after strncpy(): %s\n", dest);
	

	return 0;
}

void mystrncpy(char *dest, char *src, int n) {
	while(n > 0) {
		*dest = *src;

		dest++;
		src++;
		n--;
	}
}