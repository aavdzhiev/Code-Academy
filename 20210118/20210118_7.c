/* Задача 7: Условен оператор (?:) 
а) въведете стойност за nA с scanf
b) използвайте условния оператор за намиране на максималното от две числа */
#include <stdio.h>

int main(void){
	int nA = 1;
	int nB = (nA == 1 ? 2 : 0); /* сравнява число */

	printf("A value is %d\n", nA);
	printf("B value is %d\n", nB);

	printf("Input nA: \n");
	scanf("%d", &nA);
	printf("Input nB: \n");
	scanf("%d", &nB);
    nA > nB ? printf("nA is bigger than nB") : printf("nB is bigger than nA");

	return 0;
}