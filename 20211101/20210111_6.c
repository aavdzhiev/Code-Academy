/* 6) Променете стойността на бита на дадено число на
определена позиция. */

#include <stdio.h>

int main()
{
    int n = 6;
    int position = 0;
    int mask = 1 << position;
    n ^= mask;

    printf("%d", n);

    return 0;
}