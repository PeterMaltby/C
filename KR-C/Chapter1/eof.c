#include <stdio.h>

int main () {
  printf("looking for end of file...");

  for (;;) {
    char c = getchar();

    printf("'%c; == EOF = %i\n", c, c == EOF);

    if (c==EOF) break;
  }

  printf("EOF found!\n");
}
