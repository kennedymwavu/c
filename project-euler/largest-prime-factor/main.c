#include <stdio.h>

// The prime factors of 13195 are 5,7,13 and 29.
// What is the largest prime factor of the number 600851475143?

int is_prime(long int x) {
  if (x < 2) {
    return 0;
  }

  if (x == 2) {
    return 1;
  }

  if (x % 2 == 0) {
    return 0;
  }

  if (x == 3) {
    return 1;
  }

  for (long int i = 3; i * i < x; i += 2) {
    if (x % i == 0) {
      return 0;
    }
  }

  return 1;
}

long int get_largest_prime_factor(long int x) {
  long int largest = -1;
  for (long int i = 3; i * i <= x; i += 2) {
    if (x % i == 0 && is_prime(i)) {
      largest = i;
    }
  }

  return largest;
}

int main() {
  // long int x = 13195;
  long int x = 600851475143;
  printf("largest prime factor for %ld is %ld\n", x,
         get_largest_prime_factor(x));

  return 0;
}
