/* Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата. */
#include <stdio.h>

double atof(char *s);

int main(void) {
	char s[] = "some negative number-22.456 ";
	printf("Number: %g \n", atof(s));

	return 0;
}

double atof(char *s) {
	int i;
	double n = 0;
	double fraction = 0;
	double divisor = 1;
	int sign = 1;

	for (i = 0; s[i] >= '\0'; i++) {
		if (s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9') { /* checks if there is a negative sign before the number */
			sign *= -1;
		}
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

	return (n + fraction) * sign;
}