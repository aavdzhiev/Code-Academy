/* Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са. */
#include <stdio.h>
#include <stdlib.h>

int check_brackets(const char *filename);
int srch_sym(FILE *fp, char sym);

int main(int argc, char **argv) {
	
	if (argc < 2) {
		printf("Usage:\n\t%s file.txt\n", argv[0]);
		exit(0);
	}

	return 0;
}

int check_brackets(const char *filename) {
	char c, cl;
	FILE *fp;

	fp = fopen(filename, "r");
	if(fp == NULL)
    {
        printf("File does not exist\n");
        return -1;
    }

	do {
		c = fgetc(fp);
		if (c == '(' ) {

			
		}
	}


}

int srch_sym(FILE *fp, char sym) {
	char c;
	while (c = getc(fp) != '\n') {

	}
}