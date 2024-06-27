#include <stdio.h>

#define MAXLINE 1000

void reverse(char s[]);
int mystrlen(char s[]);

int main() {
  char line[MAXLINE];
  int c, i;

  while (1) {
    i = 0;
    while ((c = getchar()) != EOF && c != '\n' && i < MAXLINE - 1) {
      line[i++] = c;
    }
    line[i] = '\0';

    if (i == 0 && c == EOF) {
      break;
    }

    reverse(line);
    printf("%s\n", line);
  }

  return 0;
}

void reverse(char s[]) {
  int i, j;
  char temp;

  for (i = 0, j = mystrlen(s) - 1; i < j; i++, j--) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
}

int mystrlen(char s[]) {
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;
}