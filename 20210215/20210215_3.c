/* Задача 3.
Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char. */
#include <stdio.h>

int main(void) {

	int a = 123;
	float b = 12.5;
	char c = 'c';

	int *ip = &a;
	float *fp = &b;
	char *cp = &c;

	printf("int pointer: %d\n", *ip);
	printf("float pointer: %.6f\n", *fp);
	printf("char pointer: %c\n", *cp);

	

	return 0;
}