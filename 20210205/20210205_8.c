/* Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив. */
#include <stdio.h>
#include <string.h>

void reverse(char *s);
double atof(char *s);
int atoi(char *s);
char * itoa(int num, char *str);

int main(void) {
    char str1[] = "abc";
    char testAtoi[] = "3562";
    char testAtof[] = "123.564";
    int testItoa = 12;
    char itoaS[100];

    printf("'%s' to number is: %d\n", testAtoi, atoi(testAtoi)); /* test atoi */
    printf("'%s' to number is: %.6f\n", testAtof, atof(testAtof)); /* test atof */
    printf("%d to string is: '%s'\n", testItoa, itoa(testItoa, itoaS)); /* test itoa */
    printf("Reverse \"%s\" is: ", str1); /* test reverse */
    reverse(str1);
    printf("\"%s\"\n", str1);

    return 0;
}

void reverse(char *s) {
    int i;
    char *start, *end, temp;
    start = s;
    end = s;
    int length = strlen(s);

    while (*end){
        ++end;
    }
    --end;

    for (i = 0; i < length / 2; i++) {
        temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--;
    }
}

double atof(char *s) {
    int i, sign;
    double n, fraction, divisor;
    n = 0;
    fraction = 0;
    divisor = 1;
    sign = 1;

    if (*s == '-') {
        sign = -1;
        ++s;
    }

    for (; *s != '\0'; s++) {
        if (*s == '.') { /* handles the fraction part after the '.' */
            for (; *s != '\0'; ++s) {
                if (*s >= '0' && *s <= '9') {
                    fraction = (10 * fraction) + (*s - '0');
                    divisor *= 10; /* we divide by n times 10 so we can get a fraction */
                }
            }
            fraction /= divisor;
            break;
        }
        else if (*s >= '0' && *s <= '9') { /* handles the integer part */
            n = n * 10 + (*s - '0');
        }
    }

    return (n + fraction) * sign;
}

int atoi(char *s) {
    int n, sign;
    sign = 1;

    if (*s == '-') {
        n = -n;
        sign = -1;
        ++s;
    }

    for (; *s != '\0'; s++) {
        n = n * 10 + (*s - '0');
    }

    return n * sign;
}

char * itoa(int num, char *str) {
    char *res = str;

    if (num < 0) {
        *str = '-';
        num = -num;
        str++;
    }

    while (num != 0) {
        int rem = num % 10;
        *str++ = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        num = num / 10;
    }

    *str = '\0';
    reverse(res);

    return res;
    
}