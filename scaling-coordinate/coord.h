struct Coordinate {
  int x;
  int y;
  int z;
};

struct Coordinate new_cord(int x, int y, int z);

struct Coordinate scale_coordinate(struct Coordinate coord, int factor);
