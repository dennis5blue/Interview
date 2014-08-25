#include <stdio.h>
#include <stdlib.h>

void Swap (int *a,int *b){
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *b ^ *a;
}

void BubbleSort (int *data, int size){
  int i=0;
  int j=0;
  for (i=0; i!=size-1; ++i){
    for (j=0; j!=size-i-1; ++j){
      if (data[j] > data[j+1]){
        Swap (&data[j],&data[j+1]);
        //printf ("Swap: %dand%d\n", data[j],data[j+1]);
      }
    }
  }
}

int main (int argc, char *argv[]){
  int *dataToSort;
  int dataSize = argc-1;
  dataToSort = (int *)malloc(dataSize*sizeof(int));
  int i=0;
  printf ("Data source: ");
  for (i=0; i!=dataSize; ++i){
    dataToSort[i] = atoi(argv[i+1]);
    printf ("%d ", dataToSort[i]);
  }
  printf ("\n");
  BubbleSort (dataToSort, dataSize);

  printf ("After sortting: ");
  for (i=0; i!=dataSize; ++i)
    printf ("%d ", dataToSort[i]);
  printf ("\n");
}
