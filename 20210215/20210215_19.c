/* Задача 19. Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема. */
#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[] = "Some random string!";
	char s2[] = "This is going to be erased!";
	char s3[] = "This is going to be copied!";
	char s4[] = "Erase all of thissssssssssssssssssssssssssssssssss";

	printf("s2 before memset: %s\n", s2);
	memset(s2, '\0', sizeof(s2));
	printf("s2 after memset: %s\n", s2);
	strcpy(s2, s1);
	printf("s2 after coping s1: %s\n", s2);
	printf("\n");
	printf("s4 before memset: %s\n", s4);
	memset(s4, '\0', sizeof(s2));
	printf("s4 after memset: %s\n", s4);
	strcpy(s4, s3);
	printf("s4 after coping s3: %s", s4);
	
	

	return 0;
}