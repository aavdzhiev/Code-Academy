/* 3) Създайте функция iz4istiBitna. Тя получава като
параметър число и индекс, и прави на нула бита на
съответния индекс в числото.*/

#include <stdio.h>

int clearBitOn(int num, int pos);

int main()
{
    printf("%d", clearBitOn(5, 2));
}

// Takes a number and index position
// Clears the bit on the position in the number
// Returns the changed number
int clearBitOn(int num, int pos)
{
    int mask = 1 << pos;
    mask = ~mask;
    num &= mask;

    return num;
}