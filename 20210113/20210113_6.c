/* 6. Дефинирайте променливи със стойност -127, 255, 6 237 498, 4 294 967 292, -9
000 000 000 000 775 845.
Изведете всяка променлива на екрана със printf() */
#include <stdio.h>

int main()
{

    char cValue = -127;
    unsigned char ucValue = 255;
    int iValue = 6237498;
    long int liValue = 4294967292;
    long long int lliValue = -9000000000000775845;

    printf("%c\n", cValue);
    printf("%d\n", ucValue);
    printf("%d\n", iValue);
    printf("%ld\n", liValue);
    printf("%lld\n", lliValue);

    return 0;
}