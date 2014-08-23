#include <stdio.h>
#include <stdlib.h>
void func1 (void){printf ("%d\n",1);}; 
void func2 (void){printf ("%d\n",2);};
void func3 (void){printf ("%d\n",3);};
void func4 (void){printf ("%d\n",4);};
void func5 (void){printf ("%d\n",5);};

int main(int argc, char *argv[]){
  int n=0;
  n = atoi(argv[1]);
  printf ("n = %d\n",n);
  void (*ptrFunc[5])(void) = {func1,func2,func3,func4,func5};
  ptrFunc[n-1]();
  return 0;
}
