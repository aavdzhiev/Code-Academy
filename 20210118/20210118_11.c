/* Упражнение 11. Increment / decrement operators */
#include <stdio.h>
int main()
{
	int iCounter = 0;
	while (++iCounter < 3) {
		printf("Counter %d\n", iCounter);
		printf("++ Counter: %d\n", ++iCounter);
		printf("-- Counter: %d\n", --iCounter);
		printf("Counter ++: %d\n", iCounter++);
		printf("Counter --: %d\n", iCounter--);
		/* Какво става, ако се препълни броячът? */
	}

	return 0;
}