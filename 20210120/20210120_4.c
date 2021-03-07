/* Задача 7.4. Да се изчисли сумата на целите числа в
зададен диапазон [a, b] – използване на цикъл с пред-условие –
оператор while. */
#include <stdio.h>

int cSumRange(int a, int b);

int main(void) {

	printf("%d\n", cSumRange(1, 5));

	return 0;
}

int cSumRange(int a, int b) {
	int res = 0;
	while (a <= b)
	{
		res += a;
		a++;
	}

	return res;
}
