#include <stdio.h>
#include <stdlib.h>

#define DAYS_OF_MONTH(n) (n==6||n==9||n==11? 30:31)
int main (int argc, char *argv[]){
  int days = DAYS_OF_MONTH (atoi (argv[1]));
  printf ("days = %d",days);
  return 0;
}
