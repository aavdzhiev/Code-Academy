/* Задача 4.
Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата */
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
    int i;

    for (i = 0; i < passLength; i++) {
        r = (rand() % 94) + 33;
        arr[i] = r;
        printf("%c", r);
    }
    
}