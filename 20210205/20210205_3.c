/* Задача 3.Какво е грешното на този код?

void my_strcpy(char *t, char *s){
for(; *t; t++, s++)
*s = *t;
}

 */
#include<stdio.h>

/* 
Грешката е, че for цикълът спира преди да е копирана терминиращата 0
и така тя не присъства в новия стринг.
В main се вижда, че когато имаме втори стринг str2, който е по-дълъг от str1,
при копиране, последните символи на str2 остават, защото няма терминираща 0. 
*/
void my_strcpy(char *t, char *s);


int main(void) {
	char str1[] = "abc";
	char str2[] = "repde";

	my_strcpy(str1, str2);
	printf("str1: %s, str2: %s\n", str1, str2);
	
	return 0;
}

void my_strcpy(char *t, char *s) {
	for(; *t; t++, s++)
	*s = *t;
}


