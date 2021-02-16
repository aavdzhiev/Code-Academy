/* Задача 22. Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * replaceWord(char *s, const char *oldW, const char *newW);

int main(void) {
	char s1[] = {"I am a poor programmer"};

	printf("Old string before replace: %s\n", s1);
	char *newString = replaceWord(s1, "poor", "great");

	printf("New string is: %s\n", newString);

	return 0;
}

/* кодът е взаимстван от GeeksForGeeks, тъй като не измислих своя версия */
char * replaceWord(char *s, const char *oldW, const char *newW) {
	char *newString;
	int i, count = 0;
	int newWLen = strlen(newW);
	int oldWLen = strlen(oldW);

	for (i = 0; s[i] != '\0'; i++) {
		if (strstr(&s[i], oldW) == &s[i]) {
			count++;

			i += oldWLen - 1; 
		}
	}

	newString = (char*)malloc(i + count * (newWLen - oldWLen) + 1); 

	i = 0; 
    while (*s) { 
        if (strstr(s, oldW) == s) { 
            strcpy(&newString[i], newW); 
            i += newWLen; 
            s += oldWLen; 
        } 
        else
            newString[i++] = *s++; 
    } 
  
    newString[i] = '\0'; 

    return newString; 
}