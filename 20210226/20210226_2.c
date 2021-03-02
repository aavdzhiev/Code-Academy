/* Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера. */
#include <stdio.h>

int main(void) {
    typedef long long int v_Long;
    v_Long l1 = 331256234236;

    printf("l1: %lld, l1 size: %d\n", l1, sizeof(l1));
	

	return 0;
}