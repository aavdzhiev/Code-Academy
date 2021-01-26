/* 1. Пребройте символите, подавани на конзолата, с функцията getchar(); */
#include <stdio.h>

int main(void) {
    int c;
    int sum = 0;

    while ((c = getchar()) != EOF) {
        ++sum;
    }
    printf("Symbols sum: %d\n", sum);

    return 0;
}