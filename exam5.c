#include <stdio.h>
void e(int);
int main(){
  int a;
  a=0;
  e(a);
  return 0;
}

void e(int n){
  //printf ("%d",n);
  if (n<3){
    e(++n);
    printf("%d",n);
    e(++n);
  }
}
