/* Задача 1. Да напишем функция char *month_name(int n), която връща указател
към символен низ, съдържащ името на n-тия месец. Да декларираме въртешен static
масив от указатели, сочещ към стрингове съдържащи имената на месеците
static char *name[] = {
"Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December" */
#include <stdio.h>

char *month_name(int n);

int main(void) {
	int n = 0;
	printf("Enter a number from 1 to 12: \n");
	scanf("%d", &n);
	printf("Your month is %s.\n", month_name(n));
	

	return 0;
}

char *month_name(int n) {
	static char *name[] = {
		"Illegal month",
		"January", "February", "March",
		"April", "May", "June",
		"July", "August", "September",
		"October", "November", "December"
	};

	if (n < 0 || n > 12) {
		return name[0];
	}

	return *(name + n);
}