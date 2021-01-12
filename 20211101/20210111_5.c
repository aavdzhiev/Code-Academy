/* 5) Създайте функция obarniBitNa. Тя получава
следните параметри - число и индекс. Като резултат
функцията обръща бита на съответната позиция в
числото (съответно от 0 на 1 или от 1 на 0). */

#include <stdio.h>

int reverseBitOn(int n, int pos);

int main()
{
    printf("%d", reverseBitOn(8, 0));

    return 0;
}

int reverseBitOn(int n, int pos)
{
    int mask = 1 << pos;
    n ^= mask;

    return n;
}
