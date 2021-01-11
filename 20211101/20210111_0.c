/* Декларирайте функция, която събира две числа и връща резултата им... */

#include <stdio.h>

int addDigit(int a, int b);

int main(void)
{
    int a, b;
    a = 6;
    b = 10;

    printf("Result: %d", addDigit(a, b));
}

// Takes two integers as arguments
// Returns the sum of a and b
int addDigit(int a, int b)
{
    int res;
    res = a + b;
    return res;
}