/* Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ...."; */
#include <stdio.h>

int countChar(char *s, char a);

int main(void) {
	char s[] = "This is a string to test my idea for search in a char and...";
	char usrInput;
	printf("Input a character: \n");
	scanf(" %c", &usrInput);

	printf("The letter %c is found %d times in s[].\n", usrInput, countChar(s, usrInput));

	return 0;
}

int countChar(char *s, char a) {
	int occurance = 0; 
	for (; *s != '\0'; s++) {
		if (*s == a) {
			occurance += 1;
		}
	}

	return occurance;

}