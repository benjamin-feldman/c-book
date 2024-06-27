#include <stdio.h>

#define IN_CODE 0
#define IN_QUOTE 1
#define IN_CHAR 2
#define IN_LINE_COMMENT 3
#define IN_BLOCK_COMMENT 4

int main() {
  int c, next_c;
  int state = IN_CODE;
  int prev_char = '\0';

  while ((c = getchar()) != EOF) {
    if (state == IN_CODE) {
      if (c == '"') {
        state = IN_QUOTE;
        putchar(c);
      } else if (c == '\'') {
        state = IN_CHAR;
        putchar(c);
      } else if (c == '/') {
        next_c = getchar();
        if (next_c == '/') {
          state = IN_LINE_COMMENT;
        } else if (next_c == '*') {
          state = IN_BLOCK_COMMENT;
        } else {
          putchar(c);
          if (next_c != EOF) {
            putchar(next_c);
          }
        }
      } else {
        putchar(c);
      }
    } else if (state == IN_QUOTE) {
      putchar(c);
      if (c == '"' && prev_char != '\\') {
        state = IN_CODE;
      }
    } else if (state == IN_CHAR) {
      putchar(c);
      if (c == '\'' && prev_char != '\\') {
        state = IN_CODE;
      }
    } else if (state == IN_LINE_COMMENT) {
      if (c == '\n') {
        state = IN_CODE;
        putchar(c);
      }
    } else if (state == IN_BLOCK_COMMENT) {
      if (c == '*') {
        next_c = getchar();
        if (next_c == '/') {
          state = IN_CODE;
        } else if (next_c != EOF) {
          ungetc(next_c, stdin);
        }
      }
    }
    prev_char = c;
  }
  return 0;
}