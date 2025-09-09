// 2520 is the smallest number that can be divided by each of the numbers from 1
// to 10 without any remainder. What is the smallest positive number that is
// evenly divisible with no remainder by all of the numbers from 1 to
// 20?

#include <stdio.h>

unsigned int smallest_number(unsigned int max_divisor,
                             unsigned int min_dividend) {
  int found = 0;
  while (1) {
    for (unsigned int divisor = 1; divisor <= max_divisor; divisor++) {
      if (min_dividend % divisor == 0) {
        if (divisor == max_divisor) {
          found = 1;
        }

        continue;
      }

      break;
    }

    if (found) {
      break;
    }

    min_dividend += max_divisor;
  }

  return min_dividend;
}

int main() {
  printf("hello, world\n");

  // by default, min_dividend should be same as max_divisor:
  printf("smallest number that divides 1:10 is %d\n", smallest_number(10, 10));

  // use 2520 as min_dividend since we know it works for 1:10
  printf("smallest number that divides 1:20 is %d\n",
         smallest_number(20, 2520));

  return 0;
}
