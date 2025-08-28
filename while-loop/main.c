#include <stdio.h>

void print_numbers_reverse(int start, int end) {
  if (end > start) {
    return;
  }

  while (start >= end) {
    printf("%d\n", start);
    start--;
  }
}

int main() {
  int a = 0;

  while (a < 5) {
    printf("value of a is: %d\n", a);
    a++;
  }

  printf("final value of a: %d\n", a);

  int i = 0;
  while (i < 5) {
    if (i == 3) {
      break;
    }

    printf("value of i: %d\n", i);
    i++;
  }

  print_numbers_reverse(15, 5);

  return 0;
}
