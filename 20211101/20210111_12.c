/* 
12) Вдигнете всички битове на число, на позиции делящи
се на 3.
*/

// Опит за решение..
#include <stdio.h>

int main()
{
    int mask = 0x49249249; // 0b1001001001001001001001001001001
    int num =                                        0b10000110;
    
    printf("%d\n", mask);

    mask ^= num; // 0b10010010010010010010010 11001111
    printf("%d\n", mask);

    int result = mask & num;
    printf("%d\n", result);
}
