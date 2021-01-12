/* 7) Занулете всички битове на числата, намиращи се на
четна позиция. */

#include <stdio.h>

unsigned int clearEvenBits(unsigned int n);

int main()
{
    unsigned int num = 255;
    printf("%u\n", clearEvenBits(num));

    return 0;
}

unsigned int clearEvenBits(unsigned int n)
{
    unsigned int mask = 0xAAAAAAAA;
    n &= mask;

    return n;
}