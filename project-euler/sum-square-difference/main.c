// The sum of the squares of the first ten natural numbers is,
// 1^2+2^2+...+10^2=385. The square of the sum of the first ten natural numbers
// is, (1+2+...+10)^2=552=3025. Hence the difference between the sum of the
// squares of the first ten natural numbers and the square of the sum is
// 3025−385=2640. Find the difference between the sum of the squares of the
// first one hundred natural numbers and the square of the sum.

#include <stdio.h>

int calculate_difference(int n) {
  int sum_of_squares = 0;
  int square_of_sum = 0;

  for (int i = 1; i <= n; i++) {
    sum_of_squares += i * i;
    square_of_sum += i;
  }

  square_of_sum *= square_of_sum;

  return square_of_sum - sum_of_squares;
}

int main() {
  printf("difference when n = 10: %d\n", calculate_difference(10));
  printf("difference when n = 100: %d\n", calculate_difference(100));
  return 0;
}
