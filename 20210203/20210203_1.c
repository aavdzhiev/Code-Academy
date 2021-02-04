/* Задача 1 декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);
Задача 1.2 принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double */
#include <stdio.h>

int main(void) {
    char charArr1[3] = "abc";
    int intArr1[3] = {1, 2, 3};
    double doubleArr1[3] = {2.3342, 3.55677775, 1.33242356};
    
	printf("charArr1 size: %d\n", sizeof(charArr1));
    printf("intArr1 size: %d\n", sizeof(intArr1));
    printf("doubleArr1 size: %d\n", sizeof(doubleArr1));

    printf("Last element of charArr1: %c\n", charArr1[2]);
    printf("Last element of intArr1: %d\n", intArr1[2]);
    printf("Last element of doubleArr1: %f\n", doubleArr1[2]);

    return 0;
}