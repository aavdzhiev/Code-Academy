/* Зада 14. Напишете глобална променлива, която увеличаваме с 1 във
функция void test(). Извикайте функцията три пъти test() от main()
принтирайте стойността на глобалната променлива. */
#include <stdio.h>

/* global variable declaration */
int globalVariable;

void test();

int main(void) {
    test();
    test();
    test();

    printf("%d\n", globalVariable);

    return 0;
}

void test() {
    globalVariable += 1;
}