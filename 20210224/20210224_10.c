/* Задача 10.
 Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0)); */
#include <stdio.h>
#include <math.h>

#define AVG(a, b) (((a) + (b)) / 2.0)
#define AVGR(a, b, res)              \
	{                                \
		int i;                       \
		for (i = (a); i <= (b); i++) \
		{                            \
			res += (float)i;         \
		}                            \
		res /= --i;                  \
	}
#define POW(x, y)                       \
	{                                   \
		if (y == 0)                     \
		{                               \
			x = 1;                      \
		}                               \
		else                            \
		{                               \
			int temp = x;               \
			x = 1;                      \
			for (int i = 0; i < y; i++) \
			{                           \
				x = x * temp;           \
			}                           \
		}                               \
	}
#define UPPER(s)                           \
	{                                      \
		int i;                             \
		for (i = 0; s[i] != '\0'; i++)     \
		{                                  \
			if (s[i] >= 97 || s[i] <= 122) \
			{                              \
				s[i] -= 32;                \
			}                              \
		}                                  \
		s[i] = '\0';                       \
	}

#define DISP(f, x)                          \
	{                                       \
		printf("sqrt(%g) = %g\n", x, f(x)); \
	}

int main(void)
{
	int a = 1;
	int b = 2;
	float res = 0;
	int x = 3;
	char str1[] = "should be upper";

	AVGR(a, b, res);
	POW(x, 3);

	printf("AVG(a, b): %.6g\n", AVG(a, b));
	printf("AVGR(a, b): %.6g\n", res);
	printf("POW(x, 3): %d\n", x);
	UPPER(str1);
	printf("str1: %s\n", str1);
	DISP(sqrt, 3.0);

	return 0;
}