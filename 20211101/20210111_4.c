/* 4) Създайте функция vdigniBitNa. Тя получава
следните параметри - число и индекс. Функцията трябва
да "вдига" бита на съответния индекс в числото (под
"вдига" ще разбираме да му присвои стойност 1) */

#include <stdio.h>

int turnBitOn(int a, int pos);

int main()
{
    printf("%d", turnBitOn(3, 2));

    return 0;
}

int turnBitOn(int a, int pos)
{
    int mask = 1 << pos;
    a |= mask;

    return a;
}
