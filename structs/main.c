#include <stdio.h>

struct Person {
  char *name;
  int age;
  float height;
};

int main() {
  printf("hello, world!\n");

  struct Person mwavu;
  mwavu.name = "mwavu";
  mwavu.age = 25;
  mwavu.height = 161.5;

  printf("my name is %s. i'm %d years old, and %.2fcm in height.\n", mwavu.name,
         mwavu.age, mwavu.height);

  return 0;
}
