#include "snek-score.h"
#include <stdio.h>

int main() {
  float res = snek_score(5, 10, 1000, .7);
  printf("my sneklang score: %f\n", res);
  return 0;
}
