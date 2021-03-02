/* Задача 9. Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова */
#include <stdio.h>

int main(void) {
	int a = 128;
	int b = 34;
	double res = 0.0;

	res = (double)a / b;

	printf("Result (double)a / b = %.2lf\n", res);
	res = a / b;
	printf("Result a / b = %.2lf\n", res);
	
	return 0;
}