/* Задача 5.
Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор. */
#include <stdio.h>
#define ARR_LEN 10

struct date {
	int day;
	int month;
	int year;
};

void print_date(struct date d) {
	printf("%d, %d, %d\n", d.day, d.month, d.year);
}

int main(void) {
	struct date arr[ARR_LEN];
	int i, day = 1;

	for (i = 0; i < ARR_LEN; i++) {
		arr[i].day = day++;
		arr[i].month = 2;
		arr[i].year = 2021;
	}

	for (i = 0; i < ARR_LEN; i++) {
		print_date(arr[i]);
	}
	


	

	return 0;
}