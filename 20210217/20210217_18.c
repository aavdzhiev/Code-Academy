/* Напишете програма, която да създаде стек (LIFO) от 16 елемента, който
има следното API
int pop()
void push()
int top()
int isFull() */
#include <stdio.h>
#define MAXSIZE 16
int stack[MAXSIZE];
int top = -1;

int isEmpty();
int isfull();
int pop();
void push(int data);
int show_top();

int main() {
	push(2);
	push(4);
	push(12);
	push(8);
	push(44);
	printf("Top is: %d\n", show_top());
	printf("Popped %d!\n", pop());
	show_top();
	
	
	printf("Stack full: %s\n", isfull() ? "true" : "false");
	
	return 0;
}

int isfull() {
	if (top == MAXSIZE)
		return 1;
	else
		return 0;
}

int isEmpty() {
   if(top == -1)
      return 1;
   else
      return 0;
}

int pop() {
   int data;
	
   if(!isEmpty()) {
      data = stack[top];
      top = top - 1;

      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

void push(int data) {
	if (!isfull()) {
		top += 1;
		stack[top] = data;
	}
	else {
		printf("Could not insert data, Stack is full.\n");
	}
}

int show_top() {
	return stack[top];
}

