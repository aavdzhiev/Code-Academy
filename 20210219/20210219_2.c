/* Задача 2. Инициализиране на структура, вложени структури */
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#define BUFSIZE 50

struct tagDetail{
	unsigned m_uAcadId;
	char m_szAcadName[BUFSIZE];
	char m_szAcadUrl[BUFSIZE];
};

struct tagCadet {
	unsigned m_uCadetId;
	char m_CadetName[BUFSIZE];
	float m_uAverageRating;
	struct tagDetail m_detail;
};

int main(void) {
	struct tagCadet cadet = { 1, "Ivan Ivanov", 5.52, { 13, "Code Academy", "https://codeacademy.bg" } };

	printf("Cadet Id is: %d\n", cadet.m_uCadetId);
	printf("Name is: %s\n", cadet.m_CadetName);
	printf("Rating (2-6) is: %f\n", cadet.m_uAverageRating);
	printf("Academy Id is: %d\n", cadet.m_detail.m_uAcadId);
	printf("Name is: %s\n", cadet.m_detail.m_szAcadName);
	printf("URL is: %s\n", cadet.m_detail.m_szAcadUrl);
	
	printf("\n");
	struct tagCadet cadet2 = { 2, "Petar Petrov", 2.52, { 14, "Code Academy", "https://codeacademy.bg" } };

	printf("Cadet Id is: %d\n", cadet2.m_uCadetId);
	printf("Name is: %s\n", cadet2.m_CadetName);
	printf("Rating (2-6) is: %f\n", cadet2.m_uAverageRating);
	printf("Academy Id is: %d\n", cadet2.m_detail.m_uAcadId);
	printf("Name is: %s\n", cadet2.m_detail.m_szAcadName);
	printf("URL is: %s\n", cadet2.m_detail.m_szAcadUrl);
	
	return 0;

}