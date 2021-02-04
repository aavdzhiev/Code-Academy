/* Задача 4.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива. */
#include <stdio.h>

int binarySearch(int *arr, int length, int searched);

int main(void)
{
	int searchIn[13] = {1, 3, 6, 13, 23, 34, 44, 55, 66, 71, 80, 92, 100};
	int searchFor = 0;

	printf("Input a number to see if it's in the array: ");
	scanf("%d", &searchFor);
	int result = binarySearch(searchIn, 13, searchFor);

	if (result != -1)
	{
		printf("%d is in the array on position %d", searchFor, result);
	}
	else
	{
		printf("%d is not in the array.", searchFor);
	}

	return 0;
}

int binarySearch(int *arr, int length, int searched) {
	int i, first, last, middle;
	first = 0;
	last = length - 1;
	middle = (first + last) / 2;

    while (first <= last) {
        if (arr[middle] < searched) {
            first = middle + 1;
        } else if (arr[middle] == searched) {
            return middle;
            break;
        } else {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
	
    
    if (first > last)
	    return -1;
}