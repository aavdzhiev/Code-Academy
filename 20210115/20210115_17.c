/* Задача 17.* Към задача 16 да се добави втора функция, която изчислява
лицето на елипса по зададени два параметъра ( Пи * A * B) */
#include <stdio.h>

const double c_PI = 3.14159265358979323846;

void printEllipseArea(double a, double b);

int main(void)
{
    double aAxis1 = 1;
    double bAxis1 = 1;
    double aAxis2 = 1.5;
    double bAxis2 = 1.8;
    double aAxis3 = 13;
    double bAxis3 = 14;

    printEllipseArea(aAxis1, bAxis1);
    printEllipseArea(aAxis2, bAxis2);
    printEllipseArea(aAxis3, bAxis3);

    return 0;
}

void printEllipseArea(double a, double b)
{
    double area = c_PI * a * b;
    printf("Ellipse area: %.4f\n", area);
}
