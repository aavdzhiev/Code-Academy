/* Задача 7. Запишете в осем последователни байтове в паметта 
със стойност 0xBB(1011 1011) и разпечатайте съдържанието на
горните байтове, ако типът е: double, signed long long, unsigned
long long */
#include <stdio.h>

int main(void) {
    double doubleV = 0xBB;
    signed long long signedLongLongV = 0xBB;
    unsigned long long unsignedLLV = 0xBBu;

    printf("f = %lf, i = %lld, a = %lld", doubleV, signedLongLongV, unsignedLLV);

    return 0;
}