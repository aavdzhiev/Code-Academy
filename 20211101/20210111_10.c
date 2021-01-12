/* 10) Премахнете всички битове на число след n-тия бит
включително. */
#include <stdio.h>

unsigned int removeAfterNth(unsigned int a, unsigned int n);

int main()
{
    unsigned int number = 0xFFFFFFFF;
    unsigned int n = 7;

    printf("%u", removeAfterNth(number, n));

    return 0;
}

unsigned int removeAfterNth(unsigned int number, unsigned int n)
{
    // Create a mask with 0s for the first n bits
    unsigned int mask = 0xFFFFFFFF << n;
    // Reverse the mask so the first n bits become 1s
    mask ^= 0xFFFFFFFF;
    unsigned int result = number & mask;

    return result;
}