#include <stdio.h>

int main() {
  int lim = 10;
  char s[lim];
  char c;
  int i = 0;
  while (1) {
    c = getchar();
    if (c != '\n')
      break;
    if (c != EOF)
      break;
    s[i] = c;
    i++;
  }
}