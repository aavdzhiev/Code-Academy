/* 2. Да направим функция, която ще принтира числата от
десетичен в бинарен вид: 
2. Да съберем пак две числа от тип char 255 + 10, да използваме функцията
за представяне на числата в двоичен вид:*/
#include <stdio.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i >> 1)
        (n & i) ? printf("1") : printf("0");
    printf("\n");
}

int main()
{
    char c1 = 255; // Char-ът overflow-ва още тук и ще видим само 1-ци
    bin(c1);
    char c2 = 10;
    bin(c2);
    char c3 = c1 + c3;
    bin(c3);

    return 0;
}