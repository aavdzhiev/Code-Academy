/* 7. Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357
674 000, 3 657 895 000.
Изведете всяка променлива на екрана със printf()*/
#include <stdio.h>

int main()
{

    short unsigned int shortUnsignedIntValue = 24212;
    int intValue = -1357674;
    unsigned int unsignedIntValue = 1357674;
    long int longintValue = -1357674000;
    unsigned long long int unsignedLongIntValue = 3657895000;

    printf("%d\n", shortUnsignedIntValue);
    printf("%d\n", intValue);
    printf("%d\n", unsignedIntValue);
    printf("%ld\n", longintValue);
    printf("%lld\n", unsignedLongIntValue);


    return 0;
}