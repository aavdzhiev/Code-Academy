/* Зада 14. Напишете глобална променлива, която увеличаваме с 1 във
функция void test(). Извикайте функцията три пъти test() от main()
принтирайте стойността на глобалната променлива.
Задача 15. Използвайте статична локална променлива, за да постигнете
същото поведение, описано в задача 14 */
#include <stdio.h>

void test();

int main(void) {
    test();
    test();
    test();

    return 0;
}

void test() {
    static int staticVariable;
    staticVariable += 1;
    printf("%d\n", staticVariable);
}