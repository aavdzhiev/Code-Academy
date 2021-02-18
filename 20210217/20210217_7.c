/* Задача 7.
Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква.  */
#include <stdio.h>
#define STR_LEN 1000
#define ALPHABET_LEN 26

int *countLetters(char *s);
void print_frequencies(int *a, int length);

int main(void) {
	char s[STR_LEN] = {"A while back I needed to count the amount of letters that a piece of text in an email template had (to avoid passing any character limits). Unfortunately, I could not think of a quick way to do so on my macbook and I therefore turned to the Internet."};

	print_frequencies(countLetters(s), ALPHABET_LEN);

	return 0;
}

int *countLetters(char *s) {
	char c;
	int i;
	static int freq[ALPHABET_LEN] = {0};

	for (i = 0; s[i] != '\0'; i++) {
		c = s[i];

		if (c >= 65 && c <= 90) {
			c += 32;
		}

		switch (c) {
		case 'a':
			freq[0] += 1;
			break;
		case 'b':
			freq[1] += 1;
			break;
		case 'c':
			freq[2] += 1;
			break;
		case 'd':
			freq[3] += 1;
			break;
		case 'e':
			freq[4] += 1;
			break;
		case 'f':
			freq[5] += 1;
			break;
		case 'g':
			freq[6] += 1;
			break;
		case 'h':
			freq[7] += 1;
			break;
		case 'i':
			freq[8] += 1;
			break;
		case 'j':
			freq[9] += 1;
			break;
		case 'k':
			freq[10] += 1;
			break;
		case 'l':
			freq[11] += 1;
			break;
		case 'm':
			freq[12] += 1;
			break;
		case 'n':
			freq[13] += 1;
			break;
		case 'o':
			freq[14] += 1;
			break;
		case 'p':
			freq[15] += 1;
			break;
		case 'q':
			freq[16] += 1;
			break;
		case 'r':
			freq[17] += 1;
			break;
		case 's':
			freq[18] += 1;
			break;
		case 't':
			freq[19] += 1;
			break;
		case 'u':
			freq[20] += 1;
			break;
		case 'v':
			freq[21] += 1;
			break;
		case 'w':
			freq[22] += 1;
			break;
		case 'x':
			freq[23] += 1;
			break;
		case 'y':
			freq[24] += 1;
			break;
		case 'z':
			freq[25] += 1;
			break;
		default:
			break;
		}
	}

	return freq;
}

void print_frequencies(int *a, int length) {
	int i;
	char c = 'a';
	for (i = 0; i < length; i++) {
		if (a[i] > 0) {
			printf("'%c': %d\n", (c + i), a[i]);
		}
	}
}