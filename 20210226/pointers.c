#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 50

struct nameect
{
    char *fname;
    char *lname;
    int letters;
} maria;

void getinfo(struct nameect *pst)
{
    char temp[SLEN];
    printf("Please enter your first name.\n");
    gets(temp);

    /* allocate memory to hold name */
    pst->fname = (char *)malloc(strlen(temp) + 1);

    /* copy name to allocated memory */
    strcpy(pst->fname, temp);

    printf("Please enter your first name.\n");
    gets(temp);

    pst->lname = (char *)malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}

int main()
{
    struct nameect *p_maria;
    p_maria = (struct nameect *)malloc(sizeof(maria) + 1);

    getinfo(p_maria);

    printf("fname: %s, lname: %s\n", p_maria->fname, p_maria->lname);



    return 0;
}