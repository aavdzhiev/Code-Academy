#include <math.h>
int lcm(int a, int b) {
    int gcd = 1;

    for (int i = 2; i <= (a > b ? a : b); i++) { /* find the greatest common divisor of a and b*/
        if (a % i == 0 && b % i == 0 && i > gcd) {
            gcd = i;
        }
    }

    return a * b / gcd;
}

float modulo(float n) {
    return n > 0 ? n : n * -1;
}

float square(float n) {
    if (n < 0) {
        n = modulo(n);
    }
     
    return sqrt(n);
}
