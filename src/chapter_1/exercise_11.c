/* Write a program that prints its input one word per line. */

#include <stdio.h>
#define IN 1  // inside a word
#define OUT 0 // outside a word

main() {
  int c, state;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else
      state = IN;

    switch (state)
    {
    case IN:
        putchar(c);
        break;
    
    default:
        putchar('\n');
        break;
    }
  }
}