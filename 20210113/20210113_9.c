/* 9. Дефинирайте променливи със стойност
4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458 438
583 853.39875937284928422. */
#include <stdio.h>

int main()
{

    float f1 = 4.9876543;
    double d1 = 7.123456789012345678890;
    float f2 = 18398458438583853.28;
    double d2 = 18398458438583853.39875937284928422;

    printf("%.7f\n", f1);
    printf("%lf\n", d1);
    printf("%f\n", f2);
    printf("%.17f\n", d2);

    return 0;
}