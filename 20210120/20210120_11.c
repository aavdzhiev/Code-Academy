/* Задача 7.11. switch конструкция */
#include <stdio.h>
int main()
{
	char chCode;				   /* вкъщи въведете символа със scanf */
	printf("Input chCode value: \n");
	scanf("%s", &chCode);
	printf("Code %c -> ", chCode); /* извеждаме символа */
	
	
	switch (chCode) {
	case 'x':
		printf("No\n"); /* x значи No, на някакъв измислен от нас език */
		break;
	case 'y':
	case 'z':
		printf("Maybe\n"); /* y и z значат Maybe, */
		break;
	case 'a':
		printf("Yes\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
	
	return 0;
}
