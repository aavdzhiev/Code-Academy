/* 13*) Намерете броя на позициите на битовете в които две
числа се различават. */
#include <stdio.h>

int diffBitsPositions(int a, int b);

int main()
{
    int a = 0b11111;
    int b = 0b10100; // 3

    printf("%d", diffBitsPositions(a, b));

    return 0;
}

int diffBitsPositions(int a, int b)
{
    int counter = 0;

    while (a || b)
    {
        // Compare the least significant bit of each number and if they are different we increment the counter
        if ((a & 1) != (b & 1))
        {
            counter += 1;
        }
        a >>= 1;
        b >>= 1;
    }

    return counter;
}