/* 15*) Пребройте последователностите в битовия запис на
числото. */
#include <stdio.h>

int countConsecutiveBits(int n);

int main()
{
    int number = 0b1001101110;

    printf("%d", countConsecutiveBits(number));

    return 0;
}

int countConsecutiveBits(int n)
{
    int count = 0;
    while (n)
    {
        if (n & 1)
        {
            while (n & 1)
            {
                n >>= 1;
            }
            count += 1;
        }
        n >>= 1;
    }

    return count;
}