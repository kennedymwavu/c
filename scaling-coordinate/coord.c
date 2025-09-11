#include "coord.h"

struct Coordinate new_coord(int x, int y, int z) {
  struct Coordinate c = {.x = x, .y = y, .z = z};
  return c;
}

struct Coordinate scale_coordinate(struct Coordinate coord, int factor) {
  coord.x = coord.x * factor;
  coord.y = coord.y * factor;
  coord.z = coord.z * factor;
  return coord;
}
