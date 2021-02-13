/* Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива. */
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    unsigned uNumOfElem = 0;
    int *piValues = NULL;
    int iSum = 0;

    printf("Enter number of elements: \n");
    scanf("%d", &uNumOfElem);

    piValues = (int *) malloc(uNumOfElem * sizeof(int)); 

    for (i = 0; i < uNumOfElem; ++i) {
        printf("Enter elemnt: \n"); 
		scanf("%d", piValues);
        iSum += *piValues;
        piValues++;
	}

    piValues -= i;

    printf("Your array: ");
    for(i = 0;i < uNumOfElem; i++) {
		printf("%d ", *piValues++);
	}

    printf("\nThe sum of elements in the array is: %d", iSum);
    free(piValues);

    return 0;
}