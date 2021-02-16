/* Задача 16.  Напишете програма, която чете стринг и проверява дали не е палиндром (буквите в стринга отпред назад са същите както отзад напред). Игнорирайте препинателни знаци, празни пространства и главни букви.
	He lived as a devil, eh? */
#include <stdio.h>

int isPalindrome(char *a);

int main()
{
	char str1[] = {};
	char choice;
	int res;
	printf("Enter a word to see if it's a palindrome: \n");
	res = isPalindrome(str1);

	printf("Str1: %s", str1);
	// if (res == 1) {
	//     print_array(str1); printf(" is a palindrome\n");
	// } else {
	//     print_array(str1); printf(" is not a palindrome\n");
	// }

	return 0;
}

int isPalindrome(char *a) {
	char c;
	char *start = a;
	int size = 0;

	/* get the user input */
	while ((c = getchar() != '\n')) {
		*a = c;
		a++;
		size++;
	}

	*a = '\0';

	--a;
	size /= 2;

	while (size > 0) {
		if (*start == *a) {
			start++;
			a--;
			size--;
		}
		// else if (*start >= 65 && *start <= 90) {
			
		// }
		else
			return 0;
	}

	return 1;
}
