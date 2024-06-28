#include <ctype.h>
#include <stdio.h>

int htoi(char s[]) {
  int i = 0, result = 0, digit;

  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
    i = 2;
  }

  while (s[i] != '\0') {
    if (isdigit(s[i])) {
      digit = s[i] - '0';
    } else if (s[i] >= 'a' && s[i] <= 'f') {
      digit = s[i] - 'a' + 10;
    } else if (s[i] >= 'A' && s[i] <= 'F') {
      digit = s[i] - 'A' + 10;
    } else {
      return -1;
    }

    result = result * 16 + digit;
    i++;
  }

  return result;
}