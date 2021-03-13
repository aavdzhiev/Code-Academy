/* Задача 3.
Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му. */
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} node_st;


void add(node_st ** head_ref, int new_data);
void display(node_st *node);
void deleteList(node_st **head_ref);
void displayElement(node_st *node, int n);

int main() {
    int i;
    node_st *head = NULL;

    /* create linked list with nums 1-14 */
    for (i = 1; i <= 14; i++) {
        add(&head, i);
    } 

    printf("The list looks like this: \n");
    display(head);

    printf("\n");
    printf("\nThe fifth element from the end is: ");
    displayElement(head, 5);
    deleteList(&head);

    return 0;
}

void add(node_st ** head_ref, int new_data) 
{ 
    node_st *new_node = (node_st *) malloc(sizeof(node_st)); 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
}

void deleteNode(node_st **head_ref, int position) 
{ 
   if (*head_ref == NULL) /* check if linked list is empty */
      return; 
  
   node_st *temp = *head_ref; /* head node */
  
    if (position == 0) 
    { 
        *head_ref = temp->next;   /* Change head */
        free(temp);               /* free old head */ 
        return; 
    } 
  
    /* Find previous node of the node to be deleted */
    for (int i=0; temp != NULL && i < position - 1; i++) 
         temp = temp->next; 
  
    /* If position is more than number of nodes */ 
    if (temp == NULL || temp->next == NULL) 
         return; 
  
    /* Node temp->next is the node to be deleted */
    /* Store pointer to the next of node to be deleted */
    node_st *next = temp->next->next; 
  
    /* Unlink the node from linked list */
    free(temp->next);
  
    temp->next = next;  /* Unlink the deleted node from list */ 
}

void deleteList(node_st **head_ref)
{
   /* deref head_ref to get the real head */
   node_st *current = *head_ref;
   node_st *next;
 
   while (current != NULL) 
   {
       next = current->next;
       free(current);
       current = next;
   }
   
   /* deref head_ref to affect the real head back
      in the caller. */
   *head_ref = NULL;
}

void display(node_st *node)
{ 
    while (node != NULL) 
    { 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
} 

void displayElement(node_st *node, int n)
{ 
    int i = 0;
    while (n > 0) 
    { 
        node = node->next;
        n--;
    } 
    printf("\n%d\n", node->data);
} 