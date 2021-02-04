/* Задача 11 напишете функция void squeeze(char s[], int c), която премахва символа с от низа s[] */
#include <stdio.h>
#include <string.h>

void squeeze(char *s, int c);

int main(void)
{
	char string1[] = {"some random ***string"};

	printf("before squeeze(): %s\n", string1);
	squeeze(string1, '*');
	printf("after squeeze(): %s\n", string1);

	return 0;
}

void squeeze(char *s, int c)
{
	int i,j;
	for (i = j = 0; i < strlen(s); i++) {
		if (s[i] != c) {
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
		
}