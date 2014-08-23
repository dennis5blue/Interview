#include <stdio.h>
int main(){
  int Cnt = 10;
  const char *pc = "Welcome";
  printf ("Initail *pc = %X\n",pc);
  while (*pc++){
    Cnt++;
    printf ("pc = %X; *pc = %c; Cnt = %d\n",pc,*pc,Cnt);
  }
  printf ("Cnt = %d\n",Cnt);
  printf ("C string is a char array where the last character `");
  printf ("of the actual string is followed by null\n");
}
