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
асдас
struct tm {
	int hours;
	int minutes;
	int seconds;
};

void print_time(struct tm t) {
	printf("%d:%d:%d\n", t.hours, t.minutes, t.seconds);
}

void add_hours(struct tm *t, int hours) {
	int h = t->hours + hours;
	if (h > 24) {
		h -= 24;
	} else {

	}
}

int main(void) {
	struct tm t1 = {1, 2, 33};
	struct tm *p_t1 = &t1;
	add_hours(p_t1, 12);
	print_time(t1);
	

	return 0;
}