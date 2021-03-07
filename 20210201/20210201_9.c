/* Задача 9. Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi). do-while цикълът e необходим, тъй като в масива s[ ] ще
трябва да се постави поне един символ, дори ако n е нула. Ако n = 123, за
да вземем последната цифра, трябва да разделим n по модул(%) на
основата на бройната система 10. За да получите чаръктър число, трябва
да съберете резултата с '0' т.е. 48. За да вземете следващото число, трябва
да разделите n на 10. Това продължава докато n е различно от нула. Това
генерира низа в обратен ред – 321, затова използваме функцията
reverse(char s[]); от задача 18 , за да обърнем низа. */
#include<stdio.h>

void itoa(int n, char s[]);

int main(void) {
	char arr1[1000];

	itoa(123, arr1);
	printf("arr1: %s", arr1);
	

	return 0;
}

void itoa(int n, char s[]) {
	int start = 0;
	char c;

	if (n < 0) {
		s[0] = '-';
		start = 1;
	}

	
	do {
		n /= 10;
		c = n + '0';
		s[start++] = c;

	} while (n != 0);
}