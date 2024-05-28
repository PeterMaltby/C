#include <stdio.h>

int main() {

  char c;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case '\n': printf("\\n\n"); break;
      case '\t': printf("\\t"); break;
      case ' ': putchar('_'); break;
      case '\\': printf("\\"); break;
      default: putchar(c);
    }
  }

  printf("EOF\n");

  return 0;
}
