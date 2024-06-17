/*
Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.
*/

#include <stdio.h>

main() {

  int c, nblanks;

  nblanks = 0;

  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      if (nblanks > 0) {
        putchar(' ');
        nblanks = 0;
      }
      putchar(c);
    }
    if (c == ' ')
      ++nblanks;
  }
}