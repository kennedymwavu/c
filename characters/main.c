#include <stdio.h>

// find length of a character array
int str_len(char *ptr_to_first_item) {
  int count = 0;

  while (*(ptr_to_first_item + count) != '\0') {
    ++count;
  }

  return count;
}

int main() {
  char letter = 'A';
  printf("fav letter is '%c', and in ascii it is '%d'\n", letter, letter);

  char name[] = "mwavu";
  printf("hello, %s!\n", name);

  printf("first letter in name is: '%c'\n", name[0]);
  printf("the length of name is: %d\n", str_len(&name[0]));
  return 0;
}
