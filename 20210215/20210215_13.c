/* Задача 13. Напишете програма, която намира дължината на стринг с пойнтер! 
(без да използва length()); */
#include <stdio.h>

int main(void) {
	char s1[] = "Some random string!!"; /* 20 characters */
	char *p = s1;
	int len = 0;
	
	while (*p) {
		len += 1;
		p++;
	} 

	printf("s1 length is: %d", len);
	

	return 0;
}