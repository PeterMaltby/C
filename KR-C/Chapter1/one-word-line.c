#include <stdio.h>
#include <stdbool.h>

#define IN 1
#define OUT 0

int main() {

  register char c;

  bool inWord = false;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (inWord) {
        putchar('\n');
        inWord = false;
      }
    } else {
      if (!inWord) inWord = true;
      putchar(c);
    }
  }


  return 1;
}
