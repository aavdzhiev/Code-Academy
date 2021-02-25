/* Задача 8. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори) */
#include <stdio.h>
#define MY_CONCAT(x, y) x##y
#define ONE 1

int main() {
	int i, y;
	MY_CONCAT(print, f)
	("\nThis is test\n");
	 char name[255];

	printf("Enter your name: \n");
	MY_CONCAT(scan, f) 
	("%s", &name);

	printf("Name: %s\n", name);
	
	return 0;
}