/* Задача 10. Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него. */
#include <stdio.h>
#include "f.h"

int main()
{
    int a, b;
    float n;

    printf("To find the least common multiple of a and b ->\n");
    printf("Input a\n");
    scanf("%d", &a);
    printf("Input b\n");
    scanf("%d", &b);
    printf("The lowest common multiple of %d and %d is: %d\n", a, b, lcm(a, b));

    printf("\n");
    printf("Input a number to find its the square root: \n");
    scanf("%f", &n);
    printf("The square root of %g is %.6g\n", n, square(n));

    return 0;
}