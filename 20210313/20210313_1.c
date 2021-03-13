/* Задача 1. Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък: */
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} node_st;


void add(node_st ** head_ref, int new_data);
void deleteNode(node_st **head_ref, int position);
void display(node_st *node);

int main() {
    node_st *head = NULL;

    add(&head, 1);
    add(&head, 3);
    add(&head, 9);
    add(&head, 27);
    add(&head, 54);
    add(&head, 108);

    printf("Print the list: \n");
    display(head);
    deleteNode(&head, 3);
    printf("\nPrint the list after deletion: \n");
    display(head);

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

void display(node_st *node)
{ 
    while (node != NULL) 
    { 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
} 