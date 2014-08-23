#include <stdio.h>
#include <stdlib.h>
int main (void){
  int ref[] = {8,4,0,2};
  int *ptr;
  int index;
  for (index=0,ptr=ref; index<2; index++, ptr++){
    printf("%d %d\n",ref[index], *ptr);
  }
  (*ptr)++;
  printf ("%d %d\n",ref[index],*ptr);
  return 0;
}
