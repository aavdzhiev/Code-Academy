/* Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1 */
#include <stdio.h>
#define MAX 20

void print_arr(int *a, int len);
void fillFib(int *a, int len);

int main(void) {
	int fib[MAX] = {0};

	fillFib(fib, MAX);
	print_arr(fib, MAX);

	return 0;
}

void print_arr(int *a, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
}

void fillFib(int *a, int len) {
	int i;
	a[0] = 0;
	a[1] = 1;
	a[2] = 1;

	for (i = 3; i < len; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
}