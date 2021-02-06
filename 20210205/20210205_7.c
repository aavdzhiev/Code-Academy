/* Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено. */
#include<stdio.h>

int strend(char *s, char *t);
int my_strlen(char *s); /* write helper strlen to get string length */

int main(void) {
	char str1[] = "everything";
	char str2[] = "thing";

	printf("Is '%s' at the end of '%s': %d\n", str2, str1, strend(str1, str2));

	return 0;
}

int strend(char *s, char *t) {
	int length = my_strlen(t); /* find the length of the searched string */
	
	while(*s != 0) /* find the last element of s */
		s++;
	s--;

	while(*t != 0) /* find the last element of t */
		t++;
	t--;

	while (length > 0) {
		if (*s == *t) { /* compare chars of the strings from the last */
			--s;
			--t;
			--length;
		} else {
			return 0;
		}
	}
	if (length == 0)
		return 1;

}

int my_strlen(char *s) {
	int i;
	for (i = 0; s[i] != '\0'; i++){
		;
	}

	return i;
}