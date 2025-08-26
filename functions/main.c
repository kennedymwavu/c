#include <stdio.h>

float add(int x, int y) { return (float)(x + y); }

int get_int(void) { return 100; }

void print_int(int x) { printf("this is an int: %d\n", x); }

int main() {

  int a = 5;
  int b = 10;
  printf("%d + %d = %f\n", a, b, add(a, b));

  printf("the int is: %d\n", get_int());

  print_int(20);
}
