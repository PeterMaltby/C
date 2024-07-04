#include <stdio.h>
#define MAXLENGTH 85

int main() {

  char word[MAXLENGTH + 1];

  int length = 0;
  int lastSpace = MAXLENGTH;
  int c;
  while ((c = getchar()) != EOF) {

    word[length++] = c;

    if (c == ' ') lastSpace = length - 1;

    if (c == '\n') {
      for (int i = 0; i < length; i++ ) {
        putchar(word[i]);
      }


      length = 0;
      lastSpace = MAXLENGTH;
    }

    if (length == MAXLENGTH) {
      for (int i = 0; i < lastSpace ; i++) {
        putchar(word[i]);
      }
      putchar('\n');
      
      length = 0;
      for (int i = lastSpace + 1; i < MAXLENGTH; i++) {
        word[length++] = word[i];
      }
      lastSpace = MAXLENGTH;
    }
  }

  return 0;
}
