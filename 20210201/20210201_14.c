/* Задача 14*. Напишете функция int getline(char s[],int lim), която чете ред в s[] и връща дължината му */
#include <stdio.h>

int getline(char *s, int lim);

int main(void)
{
	char str1[1000] = "Suspendisse\nRisus sed orci, ex vitae lacus luctus faucibus.";

	printf("\nFirst line of str1 is %d symbols long.\n", getline(str1, 100));

	return 0;
}

int getline(char *s, int lim)
{
	int counter = 0;

	while (*s != '\0' && counter <= lim) {
		if (*s == '\n') {
			break;
		}
		
		counter++;
		s++;
	}

	return counter;
}
