/* Задача 8.Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин. */
#include <stdio.h>
#include "f.h"

int main() {
    int a, b, c;
    printf("Input a: \n");
    scanf("%d", &a);
    printf("Input b: \n");
    scanf("%d", &b);
    printf("Input c: \n");
    scanf("%d", &c);

    printf("a + b = %d\n", add(a, b));
    printf("incr(c) = %d\n", incr(c));



    return 0;
}
