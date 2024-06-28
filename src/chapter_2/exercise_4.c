#include <stdio.h>
#include <string.h>

/*
 * not algorithmically efficient: O(n * m) time complexity.
 * TODO: Optimize using lookup table for O(n + m).
 */

void squeeze_char(char s[], int c) {
  int i, j;
  for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
}

void squeeze(char s1[], char s2[]) {
  for (int i = 0; i < strlen(s2); i++) {
    squeeze_char(s1, s2[i]);
  }
}

main() {
  char s1[] = "Lorem ipsum";
  char s2[] = "mol";
  squeeze(s1, s2);
  printf("%s\n", s1);
}