/* 3.Напишете програма, която преброява шпациите, табулациите и
новите редове. */
#include <stdio.h>

int main(void){
    int c;
    int lines = 0;
    int tabs = 0;
    int spaces = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++lines;
        }
        if (c == '\t') {
            ++tabs;
        }
        if (c == ' ') {
            ++spaces;
        }
    }
    printf("new lines: %d\n", lines);
    printf("tabs: %d\n", tabs);
    printf("spaces: %d\n", spaces);

    return 0;
}