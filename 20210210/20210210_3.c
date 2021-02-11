/* Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I? */
#include <stdio.h>
#define ARR_SIZE 1000

void print_array(char *a) {
        printf("'");
    while (*a) {
        printf("%c", *a++);
    }
        printf("'");
}
int isPalindrome(char *a);

int main() {
    char arr[ARR_SIZE], choice;
    int res;
        printf("Enter a word to see if it's a palindrome: \n");
        res = isPalindrome(arr);
        if (res == 1) {
            print_array(arr); printf(" is a palindrome\n");
        } else {
            print_array(arr); printf(" is not a palindrome\n");
        }
        
    return 0;
}

int isPalindrome(char *a) {
    char c, *pStart;
    int size;
    pStart = a;

    while((c = getchar()) != '\n') {
        *a = c;
        a++;
        size++;
    }

    *a = '\0'; /* place terminating zero */
    --a;
    size /= 2;

    while (size > 0) {
        if (*pStart == *a) {
            pStart++;
            a--;
            size--;
        } else 
            return 0;
    }

    return 1;


}