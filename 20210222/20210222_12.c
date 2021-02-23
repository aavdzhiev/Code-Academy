/* Задача 12.
Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1). */
#include <stdio.h>
#pragma pack(1)

struct bitFields
{
	short int s_int : 3;
	char c : 6;
};

struct bitFields2
{
	char c1;
	char c2;
	short int s_i1;
	short int s_i2;
};

int main(void)
{
	struct bitFields s1 = {7, 'c'};
	printf("s_int: %d, c: %c\n", s1.s_int, s1.c);
	printf("Size of the s1: %d bytes\n", sizeof(s1));

	struct bitFields2 s2 = {'a', 'z', 12, 33};
	printf("c1: %c, c2: %c, s_i1: %d, s_i2: %d\n", s2.c1, s2.c2, s2.s_i1, s2.s_i2);
	printf("Size of the s2: %d bytes\n", sizeof(s2));

	return 0;
}