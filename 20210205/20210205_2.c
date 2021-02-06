/* Задача 2.Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията. */
#include<stdio.h>

size_t my_strlen(char *s);

int main(void) {
	char str1[5] = "abcde";
	
	printf("Size of str1: %d\n", my_strlen(str1));

	return 0;
}

size_t my_strlen(char *s) {
	int i;
	size_t size = 0;
	for(i = 0; s[i] != '\0'; i++){
		size++;
	}

	return size;
}