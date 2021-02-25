/* 2. Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t. */
#include <stdio.h>
#define E (-1)
#define ONE 1
/* #define SWAP(x, y) (x ^= y ^= x ^= y) */
#define SWAP(t, x, y) {t i = x; x = y; y = i;}

int main(void) {
	int a = 4;
	int b = 8;

	printf("before swap a: %d, b: %d\n", a, b);

	SWAP(int, a, b)
	printf("after swap  a: %d, b: %d\n", a, b);
	

	return 0;
}