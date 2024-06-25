#include <stdio.h>
#define MINLENGTH 80

int main() {

  char line[MINLENGTH];

  int length = 0;
  int c;
  while ((c = getchar()) != EOF) {

    if (length < MINLENGTH) {
      line[length] = c;
    }

    length += 1;

    if (length == MINLENGTH) {
      for(int i = 0; i < MINLENGTH; i++) {
        putchar(line[i]);
      }
    }

    if (length > MINLENGTH) {
      putchar(c);
    }

    if (c == '\n') {
      length = 0;
    }
  }

  printf("hello world!");
  return 0;
}
