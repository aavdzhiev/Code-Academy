/* Задача 2. какъв ще бъде резултатът в променливата true: */
#include <stdio.h>

int main(void) {
	int x = 10;
	int y = 10;
	int z = 30;
	int trueV = x == y + (z < y) != 20; // ще се извърши първо действието в скобите z<y, което е 0. След това ще се събере с y -> 10. Ще сравни дали x == 10, което е true, т.е. 1. Накрая ще сравни дали 1 != 20, което също е true -> 1.

	printf("trueV = %d\n", trueV);

	return 0;
}