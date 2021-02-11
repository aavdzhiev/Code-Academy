/* Задача 8. Решете задачата за генериране на 6 буквена парола с пойнтери. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePass(char *arr, int passLength);

int main(void) {
    int passLegnth;
    char choice;
    
    passLegnth = 0;
    choice = 'y';

    while (choice == 'y' || choice == 'y') {
        while (passLegnth < 8 || passLegnth > 12) {
            printf("Enter pass length between 8 and 12: \n");
            scanf(" %d", &passLegnth);
        }
        char pass[passLegnth];

        printf("Your password is: ");
        generatePass(pass, passLegnth);


        printf("\n\nDo you want another password? [Y/n] ");
        scanf(" %c", &choice);
        printf("\n");
    }


    return 0;
}

void generatePass(char *arr, int passLength) {
    srand(time(NULL));
    char r;

    while (passLength > 0) {
        r = (rand() % 94) + 33;
        *arr = r;
        printf("%c", r);
        passLength--;
    }
    
}