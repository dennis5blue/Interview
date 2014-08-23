#include <stdio.h>
#include <stdlib.h>
/*int *f1 (void){
    int x = 10;
    return (&x);
  }*/
// error: function returns address of local variables

/*int *f2 (void){
    int *ptr;
    *ptr = 10;
    printf ("In f2: %X", ptr);
    return ptr;
  }*/
//segmentation fault: pointer with unintialized value
//when we dereference it (*ptr), we might access arbitrary place in memory

int *f3(void){
  int *ptr;
  ptr = (int*) malloc(sizeof(int));
  return ptr;
}

int main(void){
  f3 ();
  return 0;
}
