/* Задача 3. Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG) */
#include <stdio.h>
void debugMsg(const char *pszMsg) {
 	#ifdef mName
		printf("Name: %s\n", pszMsg);
	#endif
}

int main(void) {
	debugMsg("Some random string");

	return 0;
}