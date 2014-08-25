#include <stdio.h>
#include <stdlib.h>

typedef struct ns
{
  int data;
  struct ns *next;
} node;

node *createNode (int);
void insertNode (node*, node*);
void removeNode (node*, node*);
void printList (node*);
void freeList (node*);

int main (int argc, char *argv)
{
  node *lists = createNode (0);
  node *a = createNode (1);
  node *b = createNode (2);
  node *c = createNode (3);
  node *d = createNode (4);
  node *e = createNode (5);

  insertNode (lists, e);
  insertNode (lists, a);
  insertNode (a,b);
  insertNode (a,c);
  insertNode (e,d);

  printList (lists);
  freeList (lists);
}

node *createNode (int data)
{
  node *n = (node *)malloc(sizeof(node));
  n->data = data;
  n->next = NULL;
  return n;
}

void insertNode (node *n1, node *n2)
{
  n2->next = n1->next;
  n1->next = n2;
}

void removeNode (node *n1, node *nrm)
{
  n1->next = nrm->next;
  free (nrm);
}

void printList (node *lists)
{
  node *n = lists;
  while (n!=NULL)
  {
    printf ("%d ", n->data);
    n = n->next;
  }
  printf ("\n");
}

void freeList (node *lists)
{
  if (lists->next != NULL)
  {
    freeList (lists->next);
  }
  free (lists);
}
