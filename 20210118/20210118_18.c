/* Упражнение 18* Направете бягаща светлина, като приемете, че всеки бит
от дадена променлива, е свързан с лампа (или светодиод). Когато битът е
нула, лампата не свети, когато е единица свети.
Примерно, ако генерирате последователност:
1, 2, 3, 4, се получава следното:
1 *....................
2 .*...................
4 ..*..................
8 ...*................. ...
За да генерирате закъснение, използвайте следната функция от C runtime:
#include <unistd.h>
unsigned int sleep(unsigned int seconds); */
#include <stdio.h>
#include <unistd.h>

void binStar(unsigned n);

int main(void) {
	unsigned int maxNum = 0x80000000;
	while (maxNum > 0) {
		binStar(maxNum);
		maxNum >>= 1;
		sleep(1.5);
	}

	return 0;
}

void binStar(unsigned n) {
	unsigned i;
	for (i = 1 << 31; i > 0; i = i >> 1)
		(n & i) ? printf("*") : printf(".");
	printf("\n");
}