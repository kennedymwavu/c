// By listing the first six prime numbers: 2,3,5,7,11, and 13, we can see that
// the 6th prime is 13. What is the 10001st prime number?

#include <stdio.h>

int is_prime(int n) {
  if (n < 2) {
    return 0;
  }

  if (n == 2) {
    return 1;
  }

  if (n % 2 == 0) {
    return 0;
  }

  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int nth_prime(int n) {
  if (n == 1) {
    return 2;
  }

  int current_prime = 2;
  int current_prime_idx = 1;

  for (int i = 3; current_prime_idx < n; i += 2) {
    if (is_prime(i)) {
      current_prime = i;
      current_prime_idx++;
    }
  }

  return current_prime;
}

int main() {
  printf("the 6th prime is: %d\n", nth_prime(6));
  printf("the 10001st prime is: %d\n", nth_prime(10001));
  return 0;
}
