/* 5. Използвайте функцията sizeof(),за да проверите размера
на типа на вашата машина. Типове за проверка- integer, float,
short int, unsigned long int */
#include <stdio.h>

int main()
{

    int intValue = 2147483647;
    printf("Int size: %d\n", sizeof(intValue));
    float floatValue = 3.41231231212338;
    printf("Int size: %d\n", sizeof(floatValue));
    short int shortIntValue = 32767;
    printf("Int size: %d\n", sizeof(shortIntValue));
    unsigned long int ulIntValue = 2147483648;
    printf("Int size: %d\n", sizeof(ulIntValue));

    return 0;
}