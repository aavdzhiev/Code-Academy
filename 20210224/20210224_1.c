/* 1. Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода.  */
#include <stdio.h>
#define PI 3.14
#define E (-1)
#define MYNUM 7

int main(void) {
	int i = E;
	printf("E: %d\n", i);
	printf("Prints PI: %.2f\n", PI);
	printf("My fav num is: %d\n", MYNUM);

	return 0;
}