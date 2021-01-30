/* Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията. */
#include <stdio.h>

float areaRightTriangle(float a, float b);
float areaRectangle(float a, float b);

int main(void) {
	float a, b;
    printf("Input a: ");
    scanf("%f", &a);
    printf("Input b: ");
    scanf("%f", &b);

	printf("The area of a right angled triangle is: %.6g\n", areaRightTriangle(a, b));
	printf("The area of a rectangle with the same sides is: %.6g\n", areaRectangle(a, b));

	return 0;
}

float areaRightTriangle(float a, float b) {
	return (a * b) / 2.0;
}

float areaRectangle(float a, float b) {
	return areaRightTriangle(a, b) * 2;
}