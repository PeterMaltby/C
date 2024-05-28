

#include <stdio.h>
int main() {

  int x = 32;
  int* xptr= &x;

  printf("x is at: %p, with value %i\n", xptr, x);

  printf("hello world!");


  return 1;
}
