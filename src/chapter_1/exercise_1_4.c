/*
conversion from celsius to fahrenheit
*/

#include <stdio.h>

#define LOWER -20
#define UPPER 100
#define STEP 10

int main() {
  float fahr, celsius;

  celsius = LOWER;

  printf("%3s %7s\n", "C°", "F°");
  printf("-----------\n");
  while (celsius <= UPPER) {
    fahr = 32 + (9.0 / 5.0) * celsius;
    printf("%3.0f %7.1f\n", celsius, fahr);
    celsius += STEP;
  }
  return 0;
}
