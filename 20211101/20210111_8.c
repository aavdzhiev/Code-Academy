/* 8) Намерете позицията на най-старшия бит, който е със
стойност 1 в дадено число.*/

#include <stdio.h>

int main()
{
    int number = 0b100000; // най-старшият е на позиция 5
    int counter = -1;

    while (number > 0)
    {
        number >>= 1;
        counter += 1;
    }

    printf("The most significant bit is on position %d\n", counter);

    return 0;
}
