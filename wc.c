#include <stdio.h>
#include <stdbool.h>

int main() {

  long nl = 0;
  long long nc = 0;
  long nw = 0;
  int c;

  bool inWord = false;

  while ((c = getchar()) != EOF) {
    nc++;
    if (c == '\n') nl++;
    if (c == ' ' || c == '\t' || c == '\n') {
      inWord = false;
    } else if (!inWord) {
      inWord = true;
      nw++;
    }
  }

  printf("word count: %lu\nchars count: %llu\nline count: %lu\n",nw ,  nc, nl);

  return 0;
}
