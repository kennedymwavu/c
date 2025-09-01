#include <stdio.h>

int sum_even_fibonnaci(int max) {
  if (max == 1) {
    return 0;
  }

  if (max == 2) {
    return 2;
  }

  int previous_fibonacci = 1;
  int current_fibonacci = 2;
  int total = 2; // even fibonacci
  while (current_fibonacci <= max) {
    int next_fibonacci = previous_fibonacci + current_fibonacci;
    if (next_fibonacci % 2 == 0) {
      total += next_fibonacci;
    }
    previous_fibonacci = current_fibonacci;
    current_fibonacci = next_fibonacci;
  }

  return total;
}

int main() {
  printf("sum of all fibonacci numbers less than or equal to 4 million: %d\n",
         sum_even_fibonnaci(4000000));
  return 0;
}
