/* Задача 4.
Пренапишете Задача 2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките (с точност до цял грам) и обема,
както е показано в таблицата.
При влизане в някоя функция отваряте файл за писане и при успешно излизане от функцията
записвате във файла function_name() success . Това го правим за всички функции. Ако има
някаква грешка записваме грешката във файла и името на функцията. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VARNAME(n) #n
#define LOG "log.txt"

typedef struct package
{
    float weight;
    float volume;
} pckg;

void check_error(int n, const char *fname, int line) {
	FILE *fp = fopen(LOG, "a");
	if (NULL == fp) {
		printf("Error opening log file.\n");
		exit(1);
	}

	if (n == 1) {
		fprintf(fp, "%s, line %d: SUCCESS\n", fname, line);

	} else {
		printf("%s, line %d: ", fname, line);
		perror("");
		printf("\n");
		fprintf(fp, "%s, line %d: %s\n", fname, line, strerror(errno));
	}

	fclose(fp);
}

void get_pckg_info(pckg *p) {
    float buf;
    printf("Enter package weight: \n");
    check_error(scanf(" %f", &buf), __func__, __LINE__); /* compiler defines __func__ for every function */
    p->weight = buf;
    printf("Enter package volume: \n");
    check_error(scanf("%f", &buf), __func__, __LINE__);
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
        check_error(0, __func__, __LINE__);
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
        check_error(0, __func__, __LINE__);
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
	FILE *clear_log = fopen(LOG, "w");
	fclose(clear_log);
    int i, number_of_packages = 0;
    double priceBulk = 0.0, priceSeparately = 0.0;

    printf("Please enter the number of packages: \n");
    check_error(scanf("%d", &number_of_packages), __func__, __LINE__);
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