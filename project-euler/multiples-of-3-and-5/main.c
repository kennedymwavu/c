#include <stdio.h>

int sum_multiples_of_3_or_5(int max) {
  int total = 0;

  for (int i = 1; i < max; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      total += i;
    }
  }

  return total;
}

int main() {
  int max = 1000;
  int res = sum_multiples_of_3_or_5(max);
  printf("res: %d\n", res);
  return 0;
}
