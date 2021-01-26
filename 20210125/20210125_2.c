/* 2. Пребройте редовете, подадени чрез текст на конзолата. 
Използвайте функцията getchar(); */
#include <stdio.h>

int main(void)
{
    int c;
    int lines = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++lines;
    }
    printf("New lines: %d\n", lines);

    return 0;
}