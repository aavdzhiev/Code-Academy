/* Задача 9. Аритметични оператори */
#include <stdio.h>

int main(void)
{
	int iX = 13;
	int iY = 44;
	int iResult = 0;
	float fA = 23.143f;
	float fB = 2.78f;
	float fResult = 0.0f;

	iResult = iX - iY;
	printf("%d - %d = %d \n", iX, iY, iResult);
	iResult = iY / iX;
	printf("%d / %d = %d \n", iY, iX, iResult);
	iResult = iY % iX;
	printf("%d %% %d = %d\n", iY, iX, iResult);
	/* homework: examples for '*' и '+', float - използвайте вместо int */
	iResult = iX * iY;
	printf("%d * %d = %d\n", iY, iX, iResult);
	iResult = iX + iY;
	printf("%d + %d = %d\n", iY, iX, iResult);
	// Floats
	printf("Floats--------------\n");
	fResult = fA + fB;
	printf("%.4f + %.4f = %.4f\n", fA, fB, fResult);
	fResult = fA - fB;
	printf("%.4f - %.4f = %.4f \n", fA, fB, fResult);
	fResult = fA / fB;
	printf("%.4f / %.4f = %.4f \n", fA, fB, fResult);
	iResult = fA * fB;
	printf("%.4f * %.4f = %.4f\n", fA, fB, fResult);

	return 0;
}