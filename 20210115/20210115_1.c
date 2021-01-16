/* Задача 1. Дефиниция и декларация на променлива */
#include <stdio.h>

extern int g_nValue; /* global variable declaration */

int main(void) {
    printf("Global variable = %d \n", g_nValue);
    return 0;
}

int g_nValue = 321; /* global variable definition */