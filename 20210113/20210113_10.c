/* 10. Представете си, че имате фирма за отдаване на каравани и кемпери под
наем, за която трябва да разработите софтуер...*/
#include <stdio.h>

int main()
{

    unsigned char caravans = 3;
    float caravanPrice = 90.0;
    unsigned char campers = 3;
    float camperPrice = 100.0;

    printf("Press 1 for a camper\n");
    printf("Press 2 for a caravan\n");
    int choice;
    scanf("%d", &choice);
    printf("Your choice is %d", choice);

    return 0;
}