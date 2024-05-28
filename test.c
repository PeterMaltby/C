#include <stdio.h>

#define dprint(expr) printf(#expr " = %i\n", expr)

int setbits(int x, int p, int n, int y);

int main() {
  int x = 0b10101010101010101010101010101010;
  int y = 0b11010101010101010101010101010101;

  int n = 2;
  int p = 2;

  printf("x = %i\n", x);
  printf("y = %f\n", (float)x);

  dprint(x+y);


  x = setbits(x,p,n,y);

  return 1;
}

int setbits(int x, int p, int n, int y) {

  y = (y >> (p+1-n)) & ~(~0 << n);

  printf("y = %b\n", y);
  return 1;
}
