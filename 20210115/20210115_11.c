/* Задача 11. Ако имаме символен низ от символа char str[] = “Hello”;
копирайте всеки един от неговите символи в низ, който да изглежда
огледален на него. Ето така char rts[] = “ollaH”; и принтирайте
резултата. */
#include <stdio.h>

int main(void) {
    char str[] = "Hello";
    char rts[6];

    rts[0] = 'o';
    rts[1] = 'l';
    rts[2] = 'l';
    rts[3] = 'e';
    rts[4] = 'H';

    printf("%s\n", rts);

    return 0;
}