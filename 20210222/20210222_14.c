/* Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата. */
#include <stdio.h>

struct date { 
    unsigned int day : 5; 
    unsigned int month : 4; 
    unsigned int year; 
}; 

void print_date(struct date d) {
	printf("%u.%u.%u\n", d.day, d.month, d.year);
}

int validate_date(struct date d) {
	unsigned int day, month, year;
	day = d.day;
	month = d.month;
	year = d.year;

	if (day <= 0 || day > 31 || month <= 0 || month > 12 || year < 0) {
		return 0;
	}

	return 1;
}

int main(void) {
	struct date date1 = {31, 12, 1986};
	// unsigned int d, m, y;

	// printf("Input day: \n");
	
	// printf("Input month: \n");
	// printf("Input year: \n");

	if (validate_date(date1)) {
		printf("The date is: ");
		print_date(date1);
	} else {
		printf("Invalid date.");
	}

	return 0;
}