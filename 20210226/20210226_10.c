/* Задача 10. Опитайте се да използвате колкото се може
повече неявни преобразувания на типове в С-и */
#include <stdio.h>

int main() {
	char c = '0';
	short shortInt = -(c + c);
	unsigned short unsShort = -(c + c);
	int i = shortInt;
	unsigned int unsInt = unsShort;
	long longInt = unsInt;
	unsigned long unsLongInt = unsInt;
	float fl = unsLongInt;
	double dV = unsLongInt;

	printf("c = %d\n", c);
	printf("shortInt = -(c + c) = %hu\n", shortInt);
	printf("unsShort = -(c + c) = %hu\n", unsShort);
	printf("i = shortInt = %d\n", i);
	printf("longInt = unsShort = %ld\n", longInt);
	printf("unsLongInt = unsInt = %lu\n", unsLongInt);
	printf("fl = unsLongInt = %.4f\n", fl);
	printf("dV = unsLongInt = %.4lf\n", unsLongInt);




	return 0;
}