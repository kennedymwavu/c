#include <stdio.h>

struct Person {
  char *name;
  int age;
  float height;
};

struct Coordinate {
  int x;
  int y;
  int z;
};

struct City {
  char *name;
  float lat;
  float lon;
};

struct Coordinate new_coord(int x, int y, int z) {
  struct Coordinate res = {.x = x, .y = y, .z = z};

  return res;
}

int main() {
  printf("hello, world!\n");

  struct Person mwavu;
  mwavu.name = "mwavu";
  mwavu.age = 25;
  mwavu.height = 161.5;

  printf("my name is %s. i'm %d years old, and %.2fcm in height.\n", mwavu.name,
         mwavu.age, mwavu.height);

  struct City nairobi = {.name = "Nairobi", .lat = 78.5, .lon = 80.2};
  printf("the name is %s located at (%f, %f)\n", nairobi.name, nairobi.lat,
         nairobi.lon);

  return 0;
}
