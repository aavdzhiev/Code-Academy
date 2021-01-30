/* Задача 4. Напишете функция, която връща резултат a*2 + b*c. */
#include <stdio.h>

int sumMultiply(int a, int b, int c);

int main() {
    int a, b, c;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
	printf("Input c: ");
    scanf("%d", &c);

    printf("%d * 2 + %d * %d = %d", a, b, c, sumMultiply(a, b, c));

    return 0;
}

int sumMultiply(int a, int b, int c) {
    return (a * 2) + (b * c);
}