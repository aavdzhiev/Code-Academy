/* Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте. */
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[32];
} Person;

int main() {
    Person me = {1};
    strcpy(me.name, "Anastas");

    printf("%d: %s\n", me.id, me.name);
    
    return 0;
}