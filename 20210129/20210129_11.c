/* Задача 11*. Напишете програма, която да премахва всички
коментари в една С програма. */
#include <stdio.h>

int main() {
    int c;
    int flagInComment = 0;
    char inpt[1000];
    int i = 0;

    while ((c = getchar()) != EOF) {
        inpt[i++] = c;
    }

    for (int j; j < i; j++) {
        if (inpt[j] == '/' && inpt[j + 1] == '*') {
            flagInComment = 1;
        }
        else if (flagInComment == 1 && inpt[j - 1] == '*' && inpt[j] == '/') {
            flagInComment = 0;
        }
        else if (flagInComment == 0) {
            putchar(inpt[j]);
        }
    }

    return 0;
}