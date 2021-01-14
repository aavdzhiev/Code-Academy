/* 11. Създайте С програма, която калкулира стойността на покупки в магазин за
хранителни стоки...*/
#include <stdio.h>

float addToBill(float price, float quantity);

int main()
{

    float bill;
    float tomatoPrice = 4.5;
    float flourPrice = 1.80;
    float yogurtPrice = 0.50;
    float iceCreamPrice = 0.60;
    float chocolatesPrice = 1.50;
    float loliPopPrice = 0.15;

    printf("Hi! Welcome to our store! Today we have fresh tomatoes, flour, yogurt, ice-cream and lolipops.\n");

    printf("How many kilograms of tomatoes do you want?\n");
    float tomatoWeight;
    scanf("%f", &tomatoWeight);
    float tomatoTotal = tomatoWeight * tomatoPrice;
    bill += tomatoTotal;
    printf("Here are %.2f kg of tomatoes.\n", tomatoWeight);

    printf("Your bill is %.2f.", bill);

    return 0;
}

float calculate(float price, float quantity)
{
    return price * quantity;
}
