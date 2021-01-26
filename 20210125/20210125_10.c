/* Упражнение 10.Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред. */
#include <stdio.h>

#define MAX_LINE 1000

const char *reverse(char s[]);

int main(void) {
    int c;
    char string[MAX_LINE];
    int count;

    while ((c = getchar()) != EOF && count < MAX_LINE - 1) {
        string[count++] = c;
        if (c == '\n') {
            string[count] = '\0';
            printf("----------\n");
            printf("%s\n", reverse(string));
            count = 0;
        }
    }

    printf("string variable: %s", string);

    return 0;
}

const char *reverse(char s[]) {
    static char rev[1000];
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        k = i - 1;
    }
    for (j = 0; j <= i - 1; j++) {
        rev[j] = s[k];
        k--;
    }

    return rev;
}
