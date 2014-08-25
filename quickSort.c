#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b){
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *b ^ *a;
}

int split (int *data, int lower, int upper){
  int i, p, q, t;
  p = lower+1;
  q = upper;
  i = data[lower];
  while (q >= p){
    while (data[p] < i)
      p++;
    while (data[q] > i)
      q--;
    if (q > p)
      swap (&data[p], &data[q]);
  }
  swap (&data[lower], &data[q]);
  return q;
}

int main (int argc, char *argv[]){
  int *data;
  int size = argc-1;
  data = (int *)malloc(sizeof(int));
  int i;
  printf ("Before sortting: ");
  for (i=0; i!=size; ++i){
    data[i] = atoi(argv[i+1]);
    printf ("%d ",data[i]);
  }
  printf ("\n");
  int WTF; 
  WTF = split (data,0,size-1);
  
  printf ("After sortting: ");
  for (i=0; i!=size; ++i){
    data[i] = atoi(argv[i+1]);
    printf ("%d ",data[i]);
  }
  printf ("\n");
  
  return 0;
}
