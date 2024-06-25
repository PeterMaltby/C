#include <stdio.h>

int main() {
  		  //test
  int c;
  int tab_spaces = 4;
  int line_pos = 1;

  while ((c = getchar()) != EOF) {

    if (c == '\t') {
      while (line_pos % tab_spaces == 0) {
        putchar(' ');
        line_pos++;
      }
    } else {
      putchar(c);
      line_pos++;
    }

    if (c == '\n') line_pos = 1;
  }

  return 0;
}
