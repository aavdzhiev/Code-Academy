/* Задача 1 Напишете програма, която чете стринг от стандартния вход и
го извежда на стандартния изход с функцията gets(szBuf); */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 15

int main() {
	char buf[MAX]; 
  
    printf("Enter a string: "); 
    gets(buf); 
    printf("gets string is: %s\n", buf); 


    printf("Enter a string: "); 
	fgets(buf, MAX, stdin);
    printf("fgets string is: %s\n", buf); 

  
    return 0; 
}