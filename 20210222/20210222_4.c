/* Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина. */
#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
};

void print_date(struct date d) {
	printf("date: %d, %d, %d\n", d.day, d.month, d.year);
}

int main(void) {
	struct date date1;
	date1.day = 21;
	date1.month = 2;
	date1.year = 2021;

	struct date date2 = {22, 2, 2021};
	struct date date3 = {.year = 2021, .day = 23, .month = 2};

	print_date(date1);
	print_date(date2);
	print_date(date3);


	return 0;
}