/* Write a program to print a histogram of the frequencies of different
characters in its input. 

Only counts the frequencies of letters.
*/

#include <stdio.h>
#define NLETTERS 26

void draw_horizontal(int bins[]) {
  printf("Frequencies of letters: \n");
  for (int i = 0; i < NLETTERS; i++) {
    printf("%c: ", 'a' + i);
    for (int j = 0; j < bins[i]; j++) {
      printf("-");
    }
    printf("\n");
  }
}

void draw_vertical(int bins[]) {
  // TODO
}

int main() {
  int c;
  int freqs[NLETTERS] = {0};

  while ((c = getchar()) != EOF) {
    if (0 <= c - 'a' && c - 'a' < NLETTERS) {
      freqs[c - 'a']++;
    }
  }
  draw_horizontal(freqs);
  return 0;
}