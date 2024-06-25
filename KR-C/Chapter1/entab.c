#include <stdio.h>

int main() {

  int c;
  int tab_spaces = 4;
  int min_tabsize = 2;

  unsigned int space_count = 0;
  // the number of chars away from last tab stop
  unsigned int pos = 0;

  // this is esoteric as fuck
  while ((c = getchar()) != EOF) {
    // one more char from tab stop;
    pos++;

    switch (c) {
    // if we have a tab we know we go to next tab stop
    case '\t': {
      putchar(c);
      pos = 0;
      space_count = 0;
      break;
    }
    case ' ': {
      space_count++;
      // a space on a tab stop will be turned to a tab unless under min size
      if (pos % tab_spaces == 0 && space_count < min_tabsize) {
        for (; space_count > 0; space_count--)
          putchar(' ');
      }

      if (pos % tab_spaces == 0 && space_count >= min_tabsize) {
        putchar('\t');
        pos = 0;
        space_count = 0;
      }

      break;
    }
    case '\n': {
      space_count = 0;
      pos = 0;
    }
    default: {
      for (; space_count > 0; space_count--)
        putchar(' ');
      putchar(c);
    }
    }
  }

  return 0;
}
