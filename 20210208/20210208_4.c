/* Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float. */
#include<stdio.h>

double mean(double a[], int lenght);

int main(void) {
	int n, i;
	printf("Please, choose how many array elements: \n");
	scanf("%d", &n);
	double arr1[n];
	
	for (i = 0; i < n; i++) { /* fill the array */
		printf("Input a number: \n");
		scanf("%lf", &arr1[i]);
	}
	
	printf("The mean of arr1 elements is %.6lf", mean(arr1, n));

	return 0;
}

double mean(double a[], int length) {
	double res = 0.0;
	for (int i = 0; i < length; i++) {
		res += a[i];
	}

	return res / length;
}