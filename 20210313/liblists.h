typedef struct node_t
{
    int data;
    node_t *next;
} node_t;

extern node_t *start;

void init(); /* Initialize list */

int add(int data); /* add element in the beginning of the list */

int addAfter(int n, int k); /* add element after element with value k */

int addPrev(int n, int k); /* add element before an element with value k */

int addEnd(int n); /* add element at the end of the list */

int dellFirst(int *n); /* deletes the first element of the list */

node_t *dellElemReturnAfter(int *n, int k); /* delete element with value k and return the element before */

void printAfter(node_t *curr); /* print after the curr element till the end */

void dellEnd(int *n); /* delete the last element of the list */

node_t *search_iter(int k); /* search element iterative */