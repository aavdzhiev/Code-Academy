/* Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични. */
#include<stdio.h>

unsigned decToBin(unsigned n);

int main(void) {
	unsigned n;
	printf("Enter a positive number: \n");
	scanf("%u", &n);

	printf("Your number in binary is : \n");
	decToBin(n);

	return 0;
}

unsigned decToBin(unsigned n) { 
	unsigned i; 
	for (i = 1 << 31; i > 0; i >>= 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}