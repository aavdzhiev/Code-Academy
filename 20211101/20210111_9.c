/* 9) Направете на нула битовете в числа, намиращи се на
позиции между 3 и 7 */

#include <stdio.h>

int main()
{
    unsigned int mask = 0xFFFFFF8F;
    
    unsigned int num = 0b01110001;
    unsigned int num2 = 0b11111111111111111;

    unsigned int result = mask & num;
    unsigned int result2 = mask & num2;

    printf("%u\n", result);
    printf("%u\n", result2);

    return 0;
}