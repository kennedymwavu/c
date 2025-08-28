#include <stdio.h>
#include <string.h>

void print_numbers(int start, int end) {
  if (end < start) {
    return;
  }

  for (int i = start; i <= end; i++) {
    printf("%d\n", i);
  }
}

int main() {
  printf("hello, world!\n");

  for (int i = 0; i < 10; i++) {
    printf("value of i: %d\n", i);
  }

  char *name = "mwavu";
  for (int i = 0; i < strlen(name); i++) {
    printf("current char: '%c'\n", name[i]);
  }

  print_numbers(17, 25);

  return 0;
}
