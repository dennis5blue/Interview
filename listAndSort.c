#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
  int data;
  struct _node *next;
}node;

node* push_back (node *, int);
void removeInt (node *, int);
void freeList (node *);
void printList (node *);
void bubbleSort (node *, int);
void swap (int* a, int* b){
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *b ^ *a;
}

int main (int argc, char *argv[])
{
  int listSize = argc-1;
  int i=0;
  node *head = (node *)malloc (sizeof (node));
  head->data = atoi (argv[1]);
  head->next = NULL;
  node *last = head;
  for (i=1; i!=listSize; ++i)
  {
    last = push_back (last, atoi (argv[i+1]));
  }
  printList (head);
  bubbleSort (head, listSize);
  printList (head);
  return 0;
}

node* push_back (node *last, int i)
{
  node *newNode = (node *)malloc(sizeof(node));
  newNode->data = i;
  newNode->next = NULL;
  last -> next = newNode;
  return newNode;
}

void removeInt (node *head, int i)
{
  node* prevNode = head;
  node* freeNode;
  head = head->next;
  while (head != NULL)
  {
    if (head->data == i)
    {
      prevNode->next = head->next;
      freeNode = head;
      free (freeNode);
    }
    prevNode = head;
    head = head->next;
  }
}

void freeList (node *head)
{
  if (head->next != NULL)
    freeList (head->next);
  free (head);
}

void printList (node *head)
{
  while (head != NULL)
  {
    printf ("%d ",head->data);
    head = head->next;
  }
  printf ("\n");
}

void bubbleSort (node* head, int size)
{
  int i=0, j=0;
  node* thisNode;
  for (i=0; i!=size-1; ++i)
  {
    thisNode = head;
    for (j=0; j!=size-1-i; ++j)
    {
      if (thisNode->data > thisNode->next->data)
        swap (&thisNode->data, &thisNode->next->data);
      thisNode = thisNode->next;
    }
  }
}
