/* Задача 7.2. Пренапишете предишното упражнение като вместо ifelse-if конструкцията използвайте switch-case. */
#include <stdio.h>

int main()
{
    int choice;
    printf("Press 1 to see the message Hello!\n");
    printf("Press 2 to see a Poem\n");
    printf("Press 3 to see a hidden message\n");

    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("Hello!\n");
        break;
    case 2:
        printf("i carry your heart with me(i carry it in\n my heart) i am never without it(anywhere");
        break;
    case 3:
        printf("!@#$%%^&*()\n");
        break;
    default:
        printf("Invalid input :(\n");
        break;

        return 0;
    }
}