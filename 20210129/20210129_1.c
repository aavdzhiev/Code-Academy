/* Задача 1.Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата. */
#include <stdio.h>
const float g_PI = 3.14;

float circleArea(float r);

int main() {
    float area1 = circleArea(1);
    printf("%.6f", area1);

    return 0;
}

float circleArea(float r) {
    return g_PI * r * r;
}
