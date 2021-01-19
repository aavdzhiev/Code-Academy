/* Задача 1: имаме две променливи int x = 10; и int y = 10;
създайте две променливи int true, false; На първата присвоете
резултата от сравнението на х == у, а на втората х != у принтирайте
с printf променливите true и false. */
#include<stdio.h>

int main(void) {
	int x = 10;
	int y = 10;

	int trueVariable = x == y;
	int falseVariable = x != y;

	printf("trueVariable = %d\n", trueVariable);
	printf("falseVariable = %d\n", falseVariable);

	return 0;
}