/* 7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината. */
#include<stdio.h>
#define MONTHS 12
extern int months[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int dayOfYear(int year, int month, int day);

int main(void) {
	int year, month, day;
	printf("Enter year: \n");
	scanf("%d", &year);
	printf("Enter month: \n");
	scanf("%d", &month);
	printf("Enter day: \n");
	scanf("%d", &day);

	printf("%d.%d.%d is day %d of the year.\n",  day, month, year, dayOfYear(year, month, day));

	return 0;
}

int dayOfYear(int year, int month, int day) {
    int isLeap, i, sum;

	/* check if the year is leap */
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        isLeap = 1;
    else
        isLeap = 0;
	
	for (i = 0; i < month - 1; i++) {
		sum += months[isLeap][i];
	}
	sum += day;

	return sum;
}