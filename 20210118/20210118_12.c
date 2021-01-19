/* Упражнение 12. Relational operators */
#include <stdio.h>

int main()
{
	int nX = 33; /* homework, input with scanf */
	int nY = 20;

	printf("Input nX: \n");
	scanf("%d", &nX);
	printf("Input nY: \n");
	scanf("%d", &nY);

	if (nX == nY) {
		printf("%d and %d are equal\n", nX, nY);
	}
	else if (nX != nY) {
		printf("%d and %d are not equal\n", nX, nY);
	}
	if (nX > nY)
	{
		printf("%d is greater than %d\n", nX, nY);
	/* използвайте и останалите оператори за сравнение */
	} else if (nX < nY) {
		printf("%d is smaller than %d\n", nX, nY);
	}
	if (nX >= nY) {
		printf("%d is greater or equal to %d\n", nX, nY);
	}
	if (nX <= nY) {
		printf("%d is smaller or equal to %d\n", nX, nY);
	}
}
