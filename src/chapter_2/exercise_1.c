#include <float.h>
#include <limits.h>
#include <stdio.h>

short compute_max_short() {
  short s = 0;
  while (s >= 0) {
    s++;
  }
  return --s;
}

short compute_min_short() {
  short s = -1;
  while (s < 0) {
    s--;
  }
  return ++s;
}

float compute_max_float_approx() {
  // will not return the exact value of the maximum float
  float f = 1.0f;
  while (f + f > f) {
    f += f;
  }
  return f;
}

float compute_max_float() {
  float f = 1.0f;
  float last_f = 0.0f;
  float next_f;

  while (f > last_f) {
    last_f = f;
    next_f = f * 2.0f;
    if (next_f == f || next_f - f != f) {
      break;
    }
    f = next_f;
  }

  float step = f / 2.0f;

  while (step > 0.0f) {
    // binary search
    next_f = f + step;
    if (next_f > f && next_f - f <= step) {
      f = next_f;
    }
    step /= 2.0f;
  }

  return f;
}

int main() {

  printf("min int: %d\n", INT_MIN);
  printf("max int: %d\n", INT_MAX);
  printf("min short: %d\n", compute_min_short());
  printf("max short: %d\n", compute_max_short());
  printf("min float: %e\n", FLT_MIN);
  printf("max float: %e\n", compute_max_float());
  return 0;
}