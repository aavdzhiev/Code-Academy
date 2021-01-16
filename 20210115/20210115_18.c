/* Задача 18 Довършете задачата за кемперите от миналия път като добавите
променлива, в която да се събират парите, които клиента дължи на компанията.
Принтирайте резултата. Питайте клиента дали иска още налични продукти. */
#include <stdio.h>

unsigned char caravans = 3;
float caravanPrice = 90.0;
unsigned char campers = 3;
float camperPrice = 100.0;
float bill;

void addToBill(int quantity, char type);

int main(void)
{
    printf("Welcome to our Rent-a-caravan store!\n");
    while (1) {
        printf("Press 1 for a camper\n");
        printf("Press 2 for a caravan\n");
        printf("Press 0 to exit\n");

        char choice;
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Bye!");
            break;
        }

        printf("How many do you want? \n");
        int quantity;
        scanf("%d", &quantity);

        switch (choice) {
        case 1:
            addToBill(quantity, camperPrice);
            break;
        case 2:
            addToBill(quantity, caravanPrice);
            break;
        default:
            printf("Invalid choice.\n");
        }

        printf("\nDo you want to rent another vehicle? Press 1 for 'Yes', 0 for 'No': \n");
        scanf("%d", &choice);
        if (choice == 1) {
            continue;
        }
        else {
            break;
        }
    }

    return 0;
}

void addToBill(int quantity, char type) {
    bill += quantity * type;
    printf("\nYour bill is: %.2f\n", bill);
}