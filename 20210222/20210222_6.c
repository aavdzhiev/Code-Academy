/* Задача 6.
Опишете времето в структура: часове:минути:секунди като структура tagTMyTime.
Използвайки тази структура, дефинирайте следните функции: добавяне на секунди,
добавяне на минути. Добавяне на часове към дадена променлива от тип struct
tagTMyTime. Напишете следните функции: връщане на броя секунди за дадена
променлива от въведения тип и обратна функция от секундите да се генерира
променлива tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. */
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	unsigned int hour, minute, second;
} t_myTime;

int isValidTime(t_myTime *ptrTime)
{
	if ((ptrTime->second >= 0 && ptrTime->second <= 59) && (ptrTime->minute >= 0 && ptrTime->minute <= 59) && (ptrTime->hour >= 0 && ptrTime->hour <= 23))
	{
		return 1;
	}

	return 0;
}

void addSeconds(unsigned int seconds, t_myTime *ptrTime)
{
	ptrTime->second += seconds;	  /*42+78=120,60*/
	while (ptrTime->second >= 60) /*120*/
	{
		ptrTime->minute++;		   /*58+1=59,59+1=60*/
		if (ptrTime->minute >= 60) /*59,*/
		{
			ptrTime->hour++; /*24*/
			if (ptrTime->hour >= 24)
			{
				ptrTime->hour -= 24;
			}
			if (ptrTime->minute == 60) /*0*/
			{
				ptrTime->minute = 0;
			}
		}
		ptrTime->second -= 60; /*120-60=60,0*/
	}
	return;
}

void addMinutes(unsigned int minutes, t_myTime *ptrTime)
{
	ptrTime->minute += minutes; /*35+17=52*/
	while (ptrTime->minute >= 60)
	{
		ptrTime->hour++;
		if (ptrTime->hour >= 24)
		{
			ptrTime->hour -= 24;
		}
		ptrTime->minute -= 60;
	}
	return;
}

void addHours(unsigned int hours, t_myTime *ptrTime)
{
	ptrTime->hour += hours; /*23+5=28==4*/
	while (ptrTime->hour >= 24)
	{
		ptrTime->hour -= 24;
	}
	return;
}

unsigned int getSeconds(t_myTime *ptrTime) /* return seconds in time */
{
	unsigned int sec = ptrTime->second;
	sec += (ptrTime->hour * 3600);
	sec += (ptrTime->minute * 60);

	return sec;
}

t_myTime *getTime(unsigned int seconds)
{
	t_myTime *t = (t_myTime *)malloc(sizeof(t_myTime));
	t->hour = (seconds / 3600);
	t->minute = (seconds / 60) % 60;
	t->second = seconds % 60;

	return t;
}

t_myTime *addTime(t_myTime *t1, t_myTime *t2) /* add two times */
{

	if (isValidTime(t1) && isValidTime(t2))
	{
		t_myTime *add = (t_myTime *)malloc(sizeof(t_myTime));

		if (NULL == add)
		{
			printf("add(): Memory not allocated.\n");
			exit(1);
		}

		add->hour = t1->hour + t2->hour;
		add->minute = t1->minute + t2->minute;
		add->second = t1->second + t2->second;
		if (add->second >= 60)
		{
			add->minute++;
			add->second -= 60;
		}
		if (add->minute >= 60)
		{
			add->hour++;
			add->minute -= 60;
		}
		if (add->hour >= 24)
		{
			add->hour -= 24;
		}

		return add;
	}
	else
	{
		printf("Invalid time for argument(s)!");
		exit(1);
	}
}

t_myTime *diffrence(t_myTime *t1, t_myTime *t2)
{
	if (isValidTime(t1) && isValidTime(t2))
	{
		t_myTime *diff = (t_myTime *)malloc(sizeof(t_myTime));

		if (NULL == diff)
		{
			printf("difference(): Memory not allocated.\n");
			exit(1);
		}

		if (t1->hour > t2->hour)
		{
			while (t2->second > t1->second)
			{
				--t1->minute;
				t1->second += 60;
			}
			diff->second = t1->second - t2->second;
			while (t2->minute > t1->minute)
			{
				--t1->hour;
				t1->minute += 60;
			}
			diff->minute = t1->minute - t2->minute;
			diff->hour = t1->hour - t2->hour;
		}
		else
		{
			while (t1->second > t2->second)
			{
				--t2->minute;
				t2->second += 60;
			}
			diff->second = t2->second - t1->second;
			while (t1->minute > t2->minute)
			{
				--t2->hour;
				t2->minute += 60;
			}
			diff->minute = t2->minute - t1->minute;
			diff->hour = t2->hour - t1->hour;
		}
		return diff;
	}
	else
	{
		printf("Invalid time for argument(s)!");
		exit(1);
	}
}

void printTime(t_myTime *t)
{
	printf("%u:%u:%u\n", t->hour, t->minute, t->second);
}

int main(void)
{
	t_myTime t1 = {15, 46, 54};
	t_myTime t2 = {17, 18, 36};

	printf("Time 1: \n");
	printTime(&t1);
	printf("Time 2: \n");
	printTime(&t2);

	printf("Add seconds to time 1: \n");
	addSeconds(163, &t1);
	printTime(&t1);

	printf("Add minutes to time 2: \n");
	addMinutes(45, &t2);
	printTime(&t2);

	printf("Add hours to time 1: \n");
	addHours(6, &t1);
	printTime(&t1);

	printf("Get seconds from time 2: %us\n", getSeconds(&t2));

	printf("The seconds of time 1 is: \n");
	t_myTime * newTime = getTime(25300);
	printTime(newTime);

	t_myTime *t3 = addTime(&t1, &t2);
	t_myTime *t4 = diffrence(&t1, &t2);
	printf("Add time of t1 and t2 is: \n");
	printTime(t3);

	printf("Difference time of t1 and t2 is: \n");
	printTime(t4);

	free(t3);
	free(t4);
	free(newTime);

	return 0;
}