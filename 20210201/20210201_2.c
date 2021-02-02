/* Задача 2. Напишете функцията int atof(char *s), която
преобразува стринг в число с десетична запетая. Тази функция е
подобна на разглежданата по-горе atoi(char *s), само че когато се
стигне до . точката, отделяща цялата част от дробната, трябва
да се пусне още един цикъл, който да изчисли числото в
дробната част по същия начин, както е числото в цялата част.
Само че тук при дробната част трябва да имаме една
променлива, която да умножаваме по 10 всеки път до края на
дробната част power *= 10; Накрая трябва да разделим
полученото число на тази променлива, за да получим реалното
число с плаващата заперая на точното място.  */
#include <stdio.h>

double atof(char *s);

int main(void) {
	char s[] = "some number22.456 ";
	printf("Number: %g \n", atof(s));

	return 0;
}

double atof(char *s) {
	int i;
	double n = 0;
	double fraction = 0;
	double divisor = 1;

	for (i = 0; s[i] >= '\0'; i++) {
		if (s[i] == '.') { /* handles the fraction part after the '.' */
			for (int j = i; s[j] >= '\0'; j++) {
				if (s[j] >= '0' && s[j] <= '9') {
					fraction = (10 * fraction) + (s[j] - '0');
					divisor *= 10; /* we divide by n times 10 so we can get a fraction */
				}
			}
			fraction /= divisor;
			break;
		} else if (s[i] >= '0' && s[i] <= '9') { /* handles the integer part */
			n = n * 10 + (s[i] - '0');
		}
		
	}

	return (n + fraction);
}