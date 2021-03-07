/* 7.1. Използвайте конструкцията if-else if – else за да принтирате
един от 3 възможни отговора.
Press 1 to see message Hello
Press 2 to see Poem
Press 3 to see hidden mesage */
#include <stdio.h>

int main() {
    int choice;
    printf("Press 1 to see the message Hello!\n");
    printf("Press 2 to see a Poem\n");
    printf("Press 3 to see a hidden message\n");

    scanf("%d", &choice);

    if (choice == 1) {
        printf("Hello!\n");
    } else if (choice == 2) {
        printf("Roses are red..\n");
    } else if (choice == 3) {
        printf("Hidden !@#$%%^&*()\n");
    }

    return 0;
}