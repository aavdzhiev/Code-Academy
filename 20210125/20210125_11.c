/* Упражнение 11*. Напишете функция void reverse(char s[]), която обръща
низа char s[]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга. */
#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(void) {
    char string1[] = {"redrum live desserts knits regal"};
    reverse(string1);

    return 0;
}

void reverse(char s[]) {
    int i, j;
    char rev[1000];

    for (i = 0, j = strlen(s) - 1; i < strlen(s); i++, j--) {
        rev[i] = s[j];
    }

    printf("%s", rev);
}
