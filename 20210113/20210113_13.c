/* Упражнение 13. Да се състави програма, която заделя памет за данни от тип: char, int, long, float, double,
инициализира по време на компилация съответните променливи съответно
в: a=‘a’, b=102, c=50000, d=6, e=-48.907. Програмата да извежда на екрана съдържанието на заделената за данни
памет, форматирано в съответствие с типа на отделните елементи данни.
Тъй като за всеки от стандартните типове данни се заделя точно определен брой байтове, което определя и
допустимия диапазон на представените числа, то при опит за записване на число извън диапазона се получава
препълване. (Препълване може да се получи и в резултат на аритметични операции). */
#include <stdio.h>

int main()
{
    char a = 'a';
    int b = 102;
    long int c = 50000;
    float d = 6;
    double e = -48.907;

    printf("Char %c, size %d\n", a, sizeof(a));
    printf("Int %d, size %d\n", b, sizeof(b));
    printf("Long %d, size %d\n", c, sizeof(c));
    printf("Float %f, size %d\n", d, sizeof(d));
    printf("Double %lf, size %d\n", e, sizeof(e));

    int memory_usage = sizeof(a) + sizeof(b) + sizeof(c) + sizeof(d) + sizeof(e);
    printf("Memory usage: %d\n", memory_usage);

    return 0;
}