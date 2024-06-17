/*
Write a program to copy its input to its output, replacing each tab by \t,
backspace by \b, backslash by \\
*/

#include <stdio.h>

main() {

  int c, nblanks;

  nblanks = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    }
    else if (c == '\b') {
      putchar('\\');
      putchar('b');
    }
    else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    } else {
      putchar(c);
    }
  }
}