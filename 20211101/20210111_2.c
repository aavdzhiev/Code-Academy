/* 2) Създайте функция vzemiBitna. Функцията получава
параметър число и индекс. Тя връща стойността на бита
на съответния индекс. */

#include <stdio.h>

int bitOn(int num, int ind);

int main()
{
    int result = bitOn(3, 1);
    printf("%d", result);
}

int bitOn(int num, int ind)
{
    unsigned mask = 1;

    num = num >> ind;
    num = mask & num;
}