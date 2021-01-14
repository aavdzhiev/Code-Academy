/* Упражнение 1: Съберете char (255 + 10). */
#include <stdio.h>

int main()
{
    char c = 255; // Ще получим warning, че char-ът ще overflow-не и ще имаме неточности при пресмятане
    c += 10;      // В този случай ще получим стойност 9
    printf("%d\n", c);

    return 0;
}