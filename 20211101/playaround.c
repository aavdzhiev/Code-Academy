#include <stdio.h>

int toBinary(int n);

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

int main()
{

    int Op1 = 0b00001101;
    int Op2 = 0b00011001;

    int res = Op1 & Op2;

    printf("%d\n", toBinary(res));
}

int toBinary(int n)
{
    while (n)
    {
        if (n & 1)
            printf("1");
        else
            printf("0");

        n >>= 1;
    }
    printf("\n");
}