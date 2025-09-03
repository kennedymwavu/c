#include <stdio.h>

// A palindromic number reads the same both ways. The largest palindrome made
// from the product of two 2-digit numbers is 9009=91×99. Find the largest
// palindrome made from the product of two 3-digit numbers.

size_t str_len(const char *str) {
  if (!str) {
    return 0;
  }

  const char *start = str;
  while (*str) {
    str++;
  }

  return str - start;
}

int is_palindrome(int x) {
  char x_str[10];
  sprintf(x_str, "%d", x);
  int x_len = str_len(x_str);

  for (int i = 0; i < x_len; i++) {
    if (x_str[i] != x_str[x_len - i - 1]) {
      return 0;
    }
  }

  return 1;
}

size_t largest_palindrome(int from, int to) {
  int largest = 0;

  for (int f = from; f <= to; f++) {
    for (int t = f + 1; t <= to; t++) {
      int value = f * t;
      if (is_palindrome(value) && value > largest) {
        largest = value;
      }
    }
  }

  return largest;
}

int main() {
  int from = 100;
  int to = 999;
  printf("the largest palindrome from %d to %d is %ld\n", from, to,
         largest_palindrome(from, to));

  return 0;
}
