/* Задача 1.Напишете функцията void printStr(char *s) аргумент поинтер
към началото на стринга. Използвайте for цикъл и обходете стринга докато
не стигнете знака за на стринг '\0'. На ваяка итерация пристирайте всеки
един елемент на стринга с printf(“%с”, с) */
#include<stdio.h>

void printStr(char *s);

int main(void) {
    char str1[] = "The standard header <wchar.h> is included to perform input and output operations on wide streams. It can also be used to manipulate the wide strings.[1]";

    printStr(str1);

    return 0;
}

void printStr(char *s) {
    for (; *s != '\0'; s++) {
        printf("%c", *s);
    }
}