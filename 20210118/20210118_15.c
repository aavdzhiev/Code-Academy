/* Упражнение 15. Условен оператор (?:) */
#include <stdio.h>
int main()
{
	int nA = 1;
	// а) въведете стойност за nA с scanf
	printf("Input new nA value: ");
	scanf("%d", &nA);
	printf("New nA value: %d\n\n", nA);
	int nB = (nA == 1 ? 2 : 0); /* сравнява число */
	printf("A value is %d\n", nA);
	printf("B value is %d\n", nB);
	printf("----------\n");

	// b) използвайте условния оператор за намиране на максималното от две числа
	int a, b;
	printf("Input a: \n");
	scanf("%d", &a);
	printf("Input b: \n");
	scanf("%d", &b);

	a > b ? printf("a is bigger than b") : printf("b is bigger than a");
	
	return 0;
}
