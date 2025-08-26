#include "get-average.h"
#include <stdio.h>

int main() {
  int a = 1050;
  int b = 2050;
  int c = 3075;
  float avg = get_average(a, b, c);
  printf("the average of %d, %d and %d is %f\n", a, b, c, avg);
  return 0;
}
