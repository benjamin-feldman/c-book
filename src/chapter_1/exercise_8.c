/*
Write a program to count blanks, tabs and newlines.
*/

#include <stdio.h>

main() {

  int c, ntabs, nblanks, nlines;

  ntabs = 0;
  nblanks = 0;
  nlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      ++ntabs;
    if (c == ' ')
      ++nblanks;
    if (c == '\n')
      ++nlines;
  }

  printf("Number of tabs: %d\n", ntabs);
  printf("Number of blanks: %d\n", nblanks);
  printf("Number of lines: %d\n", nlines);
}