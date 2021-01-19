/* Упражнение 14. Comma operator */
#include <stdio.h>
int main() {
	int nX = 1, nY = 2;
	printf("Init values: X= %d, Y= %d\n", nX, nY);
	nX = 1 + 2, 2 * 3, 3 + 4; /* в изразите може да има фции*/
	nY = (7 * 8, 8 + 9, 9 - 4);
	printf("\nX = %d, Y = %d\n", nX, nY);

	return 0;
}
