/* Задача 2 Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) Такса до 20 г 0,46 лева; 21-50 г 0,69 лева; 51-100 г
1,02 лева; 101-200 г 1,75 лева; 201-350 г 2,13 лева; 351-500 г 2,44 лева; 501-
1000 г 3,20 лева; 1001-2000 г 4,27 лева; 2001-3000 г 5,03 лева;
Обем: до 10см + 0,01лв; 10- 50 см + 0,11 лева, 50-100 см + 0,22лв, 100-150см + 0,33лв, 150-
250см +0,56лв, 250-400см+1.50лв, 400-500см+3,11лв, 500-600см+4,89лв, над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева. */
#include <stdio.h>
#include <stdlib.h>
#define VARNAME(n) #n

typedef struct package
{
    float weight;
    float volume;
} pckg;

void get_pckg_info(pckg *p)
{
    float buf;
    printf("Enter package weight: \n");
    scanf(" %f", &buf);
    p->weight = buf;
    printf("Enter package volume: \n");
    scanf("%f", &buf);
    p->volume = buf;
}

void print_pckg(pckg *p)
{
    printf("Weight: %.2f\n", p->weight);
    printf("Volume: %.2f\n", p->volume);
}

double calculate_price(float weight, float volume)
{
    double p_weight = 0.0;
    double p_volume = 0.0;

    /* calculate the price of by weight */
    if (weight <= 0)
    {
        printf("calculate_price: Invalid value for weight!\n");
        exit(1);
    }
    else if (weight <= 20)
    {
        p_weight = 0.46;
    }
    else if (weight <= 50)
    {
        p_weight = 0.69;
    }
    else if (weight <= 100)
    {
        p_weight = 1.02;
    }
    else if (weight <= 200)
    {
        p_weight = 1.75;
    }
    else if (weight <= 350)
    {
        p_weight = 2.13;
    }
    else if (weight <= 500)
    {
        p_weight = 2.44;
    }
    else if (weight <= 1000)
    {
        p_weight = 3.20;
    }
    else if (weight <= 2000)
    {
        p_weight = 4.27;
    }
    else if (weight <= 3000)
    {
        p_weight = 5.03;
    }
    else if (weight > 3000)
    {
        p_weight = 5.03;
    }

    /* calculate price by volume */
    if (volume <= 0)
    {
        printf("calculate_price: Invalid value for weight!\n");
        exit(1);
    }
    else if (volume < 10)
    {
        p_volume = 0.01;
    }
    else if (volume < 50)
    {
        p_volume = 0.11;
    }
    else if (volume < 100)
    {
        p_volume = 0.22;
    }
    else if (volume < 150)
    {
        p_volume = 0.33;
    }
    else if (volume < 250)
    {
        p_volume = 0.56;
    }
    else if (volume < 400)
    {
        p_volume = 1.50;
    }
    else if (volume < 500)
    {
        p_volume = 3.11;
    }
    else if (volume <= 600)
    {
        p_volume = 4.89;
    }
    else if (volume > 600)
    {
        p_volume = 5.79;
    }

    return p_weight + p_volume;
}

double bulk_price(pckg **p, int n) {
    int i;
    float bulkWeight = 0.0;
    float bulkVolume = 0.0;

    for (i = 0; i < n; i++) {
        bulkWeight += p[i]->weight;
        bulkVolume += p[i]->volume;
    }

    return calculate_price(bulkWeight, bulkVolume);
}

void print_packages(pckg **p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\npackage %d\n", i + 1);
        print_pckg(p[i]);
    }
}

int main()
{
    int i, number_of_packages = 0;
    double priceBulk = 0.0, priceSeparately = 0.0;

    printf("Please enter the number of packages: \n");
    scanf("%d", &number_of_packages);
    pckg *packages[number_of_packages]; /* define the array of packages according to user input */

    /* allocate memory for each package in packages */
    for (i = 0; i < number_of_packages; i++)
    {
        packages[i] = (pckg *)malloc(sizeof(pckg));
    }

    /* get package info for each package */
    for (i = 0; i < number_of_packages; i++)
    {
        printf("\npackage %d\n", i + 1);
        get_pckg_info(packages[i]);
    }

    /* calculate price for each package */
    for (i = 0; i < number_of_packages; i++)
    {
        priceSeparately += calculate_price(packages[i]->weight, packages[i]->volume);
        
    }
    printf("The price calculated separately is %.2lf\n", priceSeparately);

    priceBulk =  bulk_price(packages, number_of_packages);
    printf("The bulk price is %.2lf\n", priceBulk);

    /* free memory for each package in packages */
    for (i = 0; i < number_of_packages; i++)
    {
        free(packages[i]);
    }
    free(packages);
    
    return 0;
}