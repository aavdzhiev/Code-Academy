/* Задача 12. Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
} */
#include <stdio.h>
#define MAX(x, y) ((x) > (y)) ? (x) : (y)

int main(void) {
	int x = 1;
	int y = 2;
	float f1 = 12.5;
	float f2 = 15.14;
	char a = 'a';
	char b = 'b';

	printf("compare ints - x or y? %d\n", MAX(x, y));
	printf("compare floats - f1 or f2? %.2f\n", MAX(f1, f2));
	printf("compare chars - a or b? %c", MAX(a, b));


	return 0;
}