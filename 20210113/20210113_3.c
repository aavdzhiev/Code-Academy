/* 3. Съберете signed char a = -10 с unsigned char z = 0 тип.*/
#include <stdio.h>

int main()
{

    char a = -10;
    unsigned char z = 0;

    unsigned char sum = a + z; // Ако запишем резултата в unsigned char, ще има грешка в изчисленията и преливане
    printf("%d\n", sum);
    char sum2 = a + z; // Ако запишем резултата в char, ще го пресметне вярно, но пак не е редно да го правим
    printf("%d\n", sum2);

    return 0;
}