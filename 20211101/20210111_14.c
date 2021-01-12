/* 14*) Обърнете битовете на число, които се намират на
нечетна позиция. */

// Опит за решение
#include <stdio.h>

int main()
{
    unsigned int mask = 0x55555555;     // 0b10101010101010101010101010 10101
    unsigned int number = 0b10000;      // 0b00000000000000000000000000 10000 

    unsigned int temp = number ^ mask;  // 0b10101010101010101010101010 00101
    printf("%u\n", temp);
    temp ^= mask;                       // 0b00000000000000000000000000 10000
    printf("%u\n", temp);

    return 0;
}
