/* Задача 23.  Напишете функция, която сортира лексикографски масив от символи (char[]) използвайки qsort. */
#include <stdio.h>
#include <stdlib.h>

int cmpfunc( const void *a, const void *b);
void sort(char *s);
void prints(const char*s);

int main(void) {
	char s[] = {'z', 'h', 'a', 'm', 's', 's', 'c', 'b', 'q', '\0'};
	int sLen = sizeof(s) - 1;

	printf("%d", sLen);

	printf("Before sorting: ");
	prints(s);
	qsort(s, (size_t)sLen, (size_t)sizeof(char), cmpfunc);
	printf("After sorrting: ");
    prints(s);

	return 0;
}

int cmpfunc(const void *a, const void *b) {
  return *(char*)a - *(char*)b;
}

void prints(const char*s) {
	int i = 0;
	while (s[i] != '\0') {
		printf("%c ", *(s + i));
		i++;
	}
	printf("\n");
}

void sort(char *s) {

}