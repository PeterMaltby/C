#include <stdio.h>
#define MAXLENGTH 500

int main() {

  char line[MAXLENGTH];

  int length = 0;
  int c;
  while ((c = getchar()) != EOF) {

    if (length >= MAXLENGTH) {
      printf("line to long!");
      return -1;
    }

    line[length++] = c;

    if (c == '\n') {
      for (int i = length - 2; i >= 0; i--) {
        putchar(line[i]);
      }
      length = 0;
      putchar('\n');
    }

  }

  for (int i = length - 1; i >= 0; i--) {
    putchar(line[i]);
  }
  putchar('\n');

  return 0;
}
