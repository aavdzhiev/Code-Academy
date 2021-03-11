typedef struct
{
	char *contents;
	int top;
	int size;
} Stack;

Stack *newStack(int size); /* create new stack */

int isFull(Stack *st); /* return 1 if stack is full else 0 */

int isEmpty(Stack *st); /* return 1 if stack is empty else 0 */

char peek(Stack *st); /* see the top element */

void push(Stack *st, char x); /* add on top of the stack */

char pop(Stack *st); /* rm the top element */

void destroy(Stack *st); /* delete the stack */