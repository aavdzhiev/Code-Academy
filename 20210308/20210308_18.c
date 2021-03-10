/* Задача 18:
Направете сериализация и десериализация на структурата
typedef struct Person{
char name[20];
int age;
char gender;
}t_person;
 в XML формат по показания в лекцията начин. */
#include <stdio.h>
static const char *XML_FORMAT_PERSON_OUT = "<person>\n\t\t<name>%s</name>\n\t\t<age>%d</age>\n\t\t<gender>%c</gender>\n</person>";
static const char *XML_FORMAT_PERSON_IN = "<person>\n\t\t<name>%s/name>\n\t\t<age>%d</age>\n\t\t<gender>%c</gender>\n</person>";


typedef struct Person{
char name[20];
int age;
char gender;
} person;

int main(void) {
	person michael = {"Michael", 23, 'M'};
	person john;
	char *filename = "task18.xml";
	FILE *fp = fopen(filename, "w+");

	if (NULL == fp) {
		printf("Cannot open file.\n");
	}

	fprintf(fp, XML_FORMAT_PERSON_OUT, michael.name, michael.age, michael.gender);

	fclose(fp);

	/* open another file to test reading of XML */
	fp = fopen("task18in.xml", "r");
	if (NULL == fp) {
		printf("Cannot open file.\n");
	}
	
	fscanf(fp, XML_FORMAT_PERSON_IN, john.name, &john.age, &john.gender);
	fclose(fp);

	printf("John: %s, %d, %c\n", john.name, john.age, john.gender);


	return 0;
}