#include <stdio.h>
#include <stdlib.h>

int main (int agrc, char* argv[])
{
  int m=3,n=4;
  int** array, *pData;
  array = (int **)malloc (m*sizeof (int *));
  pData = (int *)malloc (m*n*sizeof (int));
  int i=0;
  for (i=0; i!=m; ++i, pData+=n)
    array[i] = pData;
}
