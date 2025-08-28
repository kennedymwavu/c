#include <stdio.h>

void print_numbers_reverse(int start, int end) {
  do {
    printf("%d\n", start);
    start--;
  } while (start >= end);
}

int main() {
  printf("hello, world!\n");

  print_numbers_reverse(15, 9);
  print_numbers_reverse(10, 15);
  return 0;
}
