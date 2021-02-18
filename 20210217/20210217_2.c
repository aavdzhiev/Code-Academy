/* Задача 2. Добавете към горния код функции за умножение
и деление. */
#include <stdio.h>
#include <stdlib.h>

int add(int nA, int nB) { return (nA + nB); }
int substract(int nA, int nB) { return (nA - nB); }
int multiply(int nA, int nB) { return (nA * nB); }
int divide(int nA, int nB) { return (nA / nB); }


int main(int argc, char *argv[]) {
	int (*pfCalc)(int, int) = NULL;
	
	if (argc < 4) {
		printf("\nUsage: arg1 +,-,*,/ arg2\n");
	} else if ('-' == argv[2][0]) {
		pfCalc = substract;
	} else if ('+' == argv[2][0]) {
		pfCalc = add;
	} else if ('x' == argv[2][0]) {
		pfCalc = multiply;
	} else if ('/' == argv[2][0]) {
		if (argv[3] == 0) {
			printf("You cannot divide by zero.");
		} else {
			pfCalc = divide;
		}
	}
	
	(NULL == pfCalc) ? 0 : printf("\nResult: %d\n", (*pfCalc)(atoi(argv[1]), atoi(argv[3])));
	
	return 0;
}