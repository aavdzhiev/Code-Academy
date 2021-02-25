/* Задача 11. Ако имеме дефинирано макро
#define М
кои от по долните дефиниции ще пропаднат:
а) #if M
b) #ifdef M
c) #ifndef M
d) #if defined(M)
e) #if !defined(M) */
#include <stdio.h>
#define M

#ifndef M
#define NOTDEFINED "Macros M is not defined"
#endif

#ifdef M
#define DEFINED "Macros M is defined"
#endif

#if defined(M)
#define DEFINED2 "Macros M is defined doublechecked"
#endif

#if !defined(M)
#define NOTDEFINED2 "This won't be defined unless M is not defined"
#endif

int main() {
	/* а) #if M - тук #if очаква някакъв израз, а М не е израз - error
	 * b) #ifdef M - тук проверяваме дали макросът е дефиниран и съответво изпълнява до #endif каквото сме му задали. В този случай програмата ще влезе в #ifdef, защото М е дефиниран, въпреки че няма стойност
	 * c) #ifndef M - проверява дали макросът М е дефиниран и ако НЕ е, изпълнява кода след if-а. В този случай няма да изпълни нищо
	 * d) #if defined(M) - същото като b) ще провери дали М е дефиниран и в този случай ще върне true и ще изпълни каквото е преди #endif
	 * e) #if !defined(M) - същото като c). Тук няма да изпълни нищо, защото счита М за дефиниран
	 */
	
	printf("%s\n", DEFINED);
	/* printf("%s\n", NOTDEFINED); - this will produce an error since the program doesn't execute what is under "#ifndef M" */
	printf("%s\n", DEFINED2);
	/* printf("%s\n", NOTDEFINED2); - this will produce an error since the program doesn't execute what is under "!defined(M)" */
	
	return 0;
}