#include <stdbool.h>
#include <stdio.h>

int main() {

  int unknown = 0;
  // ascii chars only
  int charCount[128];

  for (int i = 0; i < 128; i++) {
    charCount[i] = 0;
  }

  char c;
  while ((c = getchar()) != EOF) {
    if (c > 127) {
      unknown++;
    } else {
      charCount[c]++;
    }
  }

  for (int i = 0; i < 128; i++) {
    if (charCount[i] == 0)
      continue;

    if (i == '\n') {
      printf("%3i \\n: %6i |", i, charCount[i]);
    } else {
      printf("%3i %2c: %6i |", i, i, charCount[i]);
    }

    for (int b = 0; b < charCount[i]; b++) {
      putchar('#');
    }
    putchar('\n');
  }

  return 0;
}
