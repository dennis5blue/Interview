#include <stdio.h>
#include <stdlib.h>
int main(){
  unsigned long A = 0x00001111;
  unsigned long B = 0x00000202;
  unsigned long C;
  C = A & (~B);
  C = C | B;
  printf ("C = %X",C);
  return 0;
}
