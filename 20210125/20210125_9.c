/* Задача 9. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки. */
#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            c -= 32;
        }
        putchar(c);
    }


    return 0;
}