/* Задача 1. Дефиниране на структура, достъп до членове */
#include <stdio.h>
#include <string.h>

struct tagPaper
{
	unsigned m_nBookId;
	char m_szTitle[64];
	char m_szAuthor[64];
	char m_szSubject[256];
};

int main()
{
	struct tagPaper stP1;
	stP1.m_nBookId = 22334455;
	strcpy(stP1.m_szTitle, "To Kill a Mockingbird");
	strcpy(stP1.m_szAuthor, "Harper Lee");
	strcpy(stP1.m_szSubject, "Novel, Bildungsroman, Southern Gothic, Thriller, Domestic Fiction, Legal Story");

	printf("Paper id: %d\n", stP1.m_nBookId);
	printf("Paper title: %s\n", stP1.m_szTitle);
	printf("Paper author: %s\n", stP1.m_szAuthor);
	printf("Paper subject: %s\n", stP1.m_szSubject);
	
	return 0;
}
