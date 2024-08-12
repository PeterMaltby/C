#include <stdbool.h>
#include <stdio.h>

enum State { none, inComment, inMultiComment, inString, inStringEscape, postSlash, multiCommentPostStar};

// this is a comment // hello

/* comment line 1
 * comment line 2 */
int x = 5;

int main() { //this is main

  printf("// \" //hello world\n\n");

  int c;
  enum State state = none;

  while ((c = getchar()) != EOF) {

    //printf("%i", state);

    switch (state) {
    case none: {
      switch (c) {
        case '/': state = postSlash; break;
        default: putchar(c);
      }
      break;
    }
    case inComment: {
      switch (c) {
        case '\n': state = none; break;
        default: break;
      }
      break;
    }
    case inMultiComment: {
      switch (c) {
        case '*': state = multiCommentPostStar; break;
        default: break;
      }
      break;
    }
    case inString: {
      switch (c) {
        case '\\': state = inStringEscape; break;
        case '"': state = none; break;
        default: putchar(c);
      }
    }
    case inStringEscape: {
      putchar(c);
      state = inString;
      break;
    }
    case postSlash: {
      switch (c) {
        case '/': state = inComment; break;
        case '*': state = inMultiComment; break;
        default: {
          putchar('/');
          putchar(c);
          state = none;
          break;
        }
      }
        break;
    }
    case multiCommentPostStar: {
      switch (c) {
        case '/': state = none;
        default: break;
      }
      break;
      }
    }

  }
  //
  //comment here
  return 0;
}
