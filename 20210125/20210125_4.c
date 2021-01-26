/* 4. Напишете програма, която копира входа си на изхода, като
замества всеки низ от една или повече шпации, с една
единствена шпация. */
#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ') {
            putchar(c);
        }
        else {
            putchar(c);
            while ((c = getchar()) != EOF)
                if (c != ' ') {
                    putchar(c);
                    break;
                }
        }
    }

    return 0;
}