/* Write a program to print a histogram of the lengths of words in its input. It
is easy to draw the histogram with the bars horizontal; a vertical orientation
is more challenging. */

#include <stdio.h>
#define NBINS 10
#define BIN_SIZE 1
#define OUT 0
#define IN 1

void draw_horizontal(int bins[]) {
  printf("Histogram of word lengths: \n");
  for (int i = 0; i < NBINS; i++) {
    printf("%d: ", i * BIN_SIZE);
    for (int j = 0; j < bins[i]; j++) {
      printf("-");
    }
    printf("\n");
  }
}

void draw_vertical(int bins[]) {
  // TODO
}

void add_to_bins(int length, int bins[]) {
  if (length > NBINS * BIN_SIZE) // bigger than last bin -> goes into last bin
    bins[NBINS - 1]++;
  else {
    int bin_index = length / BIN_SIZE;
    bins[bin_index]++;
  }
}

int main() {
  int c, length;
  int bins[NBINS] = {0};

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      add_to_bins(length, bins);
      length = 0;
    } else {
      length++;
    }
  }
  draw_horizontal(bins);
  return 0;
}