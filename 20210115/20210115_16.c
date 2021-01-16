/* Задача 16. Да се дефинира константата Пи (3.14159...) и да се напише
функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
В main() да се извика горната функция с радиуси 1, 1.5, 13. */
#include <stdio.h>

const double c_PI = 3.14159265358979323846;

void printCircleArea(double radius);

int main(void) {
    double radius1 = 1;
    double radius2 = 1.5;
    double radius3 = 13;

    printCircleArea(radius1);
    printCircleArea(radius2);
    printCircleArea(radius3);

    return 0;
}

void printCircleArea(double radius) {
    double area = c_PI * radius * radius;
    printf("Circle area: %.6f\n", area);
}
