/* Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF 32
#define PARNUM 5

typedef struct Participant
{
	int id;
	char *name;
	char *lname;
} Participant;

void getinfo(struct Participant *p)
{
	char temp[BUF];
	printf("Please enter participant name:\n");
    scanf("%s", &temp);

	p->name = (char *)malloc(strlen(temp) + 1);
    strcpy(p->name, temp);

	printf("Please enter participant last name:\n");
    scanf("%s", &temp);

	p->lname = (char *)malloc(strlen(temp) + 1);
    strcpy(p->lname, temp);
}

int comparator(const void* p, const void* q) 
{ 
    return strcmp(((struct Participant*)p)->name, 
                  ((struct Participant*)q)->name); 
} 

int main(void)
{
	int i;
	Participant john;
	struct Participant *participants[PARNUM]; /* create array of pointers of type Participant */
	struct Participant *(*p)[] = &participants;
	char *buffer[BUF];

	for (i = 0; i < PARNUM; i++) /* allocate memory for each pointer in the participants array */
	{
		(*p)[i] = (Participant *)malloc(sizeof(Participant));
	}

	for (i = 0; i < PARNUM; i++) { /* add data to each participant pointer */
		getinfo(participants[i]);
		participants[i]->id = i;
	}

	qsort(participants, PARNUM, sizeof(Participant), comparator);
	
	printf("Participants: \n");
	for (i = 0; i < PARNUM; i++) { /* print the participants array */
		printf("%d, %s, %s\n", participants[i]->id, participants[i]->name, participants[i]->lname);
	}

	free(p);

	return 0;
}