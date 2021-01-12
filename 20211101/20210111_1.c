#include <stdio.h>

int main()
{
    int a = 3;
    int b = 5;

    int andRes = 3 & 5;
    int orRes = 3 | 5;
    int xorRes = 3 ^ 5;

    printf("Bitwise AND result: %d\n", andRes);
    printf("Bitwsie OR result: %d\n", orRes);
    printf("Bitwsie XOR result: %d\n", xorRes);
}