/* Задача 15.
Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

enum status
{
	ACTIVE,
	INACTIVE,
	SUSPENDED,
	BLOCKED
};

struct employee
{
	int id;
	char name[32];
	double salary;
	enum status s;
};


void reverse(char* str, int len); /* reverse string */
int intToStr(int x, char str[], int d); /* int to string */
void ftoa(double n, char* res, int afterpoint); /* double to string */

int main(void)
{
	FILE *fp;
	char buff[255];
	time_t t;
	srand((unsigned)time(&t));
	int i, r;
	struct employee employees[10];
	struct employee *ptr = employees;
	char temp[32] = "Employee";
	double salary = 256.33;

	for (i = 0; i < 20; i++, ptr++)
	{
		r = rand() % 4;
		switch (r)
		{
		case 0:
			ptr->s = ACTIVE;
			break;
		case 1:
			ptr->s = INACTIVE;
			break;
		case 2:
			ptr->s = SUSPENDED;
			break;
		case 3:
			ptr->s = BLOCKED;
			break;
		}
		salary += 30;
		ptr->id = i;
		ptr->salary = salary;
		strcpy(ptr->name, temp);
		printf("%d, %s, %lf, %d\n", ptr->id, ptr->name, ptr->salary, ptr->s);
	}

	fp = fopen("./employees.csv", "a");
	fputs("id,name,salary,status\n", fp);
	for (i = 0; i < 20; i++)
	{
		itoa(employees[i].id, buff, 10);
		fputs(buff, fp);
		fputs(",", fp);

		strcpy(buff, employees[i].name);
		fputs(buff, fp);
		fputs(",", fp);

		ftoa(employees[i].salary, buff, 4);
		fputs(buff, fp);
		fputs(",", fp);

		itoa(employees[i].s, buff, 10);
		fputs(buff, fp);
		fputs("\n", fp);
	}

	fclose(fp);

	return 0;
}

void ftoa(double n, char* res, int afterpoint) 
{ 
    // Extract integer part 
    int ipart = (int)n; 
  
    // Extract floating part 
    double fpart = n - (double)ipart; 
  
    // convert integer part to string 
    int i = intToStr(ipart, res, 0); 
  
    // check for display option after point 
    if (afterpoint != 0) { 
        res[i] = '.'; // add dot 
  
        // Get the value of fraction part upto given no. 
        // of points after dot. The third parameter  
        // is needed to handle cases like 233.007 
        fpart = fpart * pow(10, afterpoint); 
  
        intToStr((int)fpart, res + i + 1, afterpoint); 
    } 
} 

int intToStr(int x, char str[], int d) 
{ 
    int i = 0; 
    while (x) { 
        str[i++] = (x % 10) + '0'; 
        x = x / 10; 
    } 
  
    // If number of digits required is more, then 
    // add 0s at the beginning 
    while (i < d) 
        str[i++] = '0'; 
  
    reverse(str, i); 
    str[i] = '\0'; 
    return i; 
}

// Reverses a string 'str' of length 'len' 
void reverse(char* str, int len) 
{ 
    int i = 0, j = len - 1, temp; 
    while (i < j) { 
        temp = str[i]; 
        str[i] = str[j]; 
        str[j] = temp; 
        i++; 
        j--; 
    } 
} 