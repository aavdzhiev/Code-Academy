/* Задача 6.Дефинирайте променлива „а“, дeфинирайте пойнтер към нея, присвоете му адреса на променливата. През пойнтера задайте нова стойност = 5 на променливата „а“. Каква е стойността на “а”? */
#include <stdio.h>

int main(void) {
	int a;
	int *p;
	p = &a;
	*p = 5;

	printf("a: %d", a);
	

	return 0;
}