/* Задача 3. Напишете функция, която връща резултат (а+в)*4. */
#include <stdio.h>

int sumMultiply(int a, int b);

int main() {
    int a,b;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);

    printf("(%d + %d) * 4 = %d", a, b, sumMultiply(a, b));

    return 0;
}

int sumMultiply(int a, int b) {
    return (a + b) * 4;
}