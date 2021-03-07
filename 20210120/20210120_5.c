/* Задача 7.5. do-while цикъл */
#include <stdio.h>
int main()
{
	int nValue = 13;
	do {
		printf("Value: %d\n", nValue);
		nValue++;
	} while (nValue < 20);
	
	return 0;
}
