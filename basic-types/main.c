#include <stdio.h>

int main() {
  int hundred = 100;
  float weight = 58.86;
  char first_letter = 'a';
  char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *msg_from_dax = "you still have 0 users!";
  char *will_never_hear_again =
      "hey teej, when will the memory course in C gonna be done?";

  printf("int: %d\nfloat: %.1f\nfirst letter: %c\nletters: %s\nmsg from dax: "
         "%s\nwill_never_hear_again: %s\n",
         hundred, weight, first_letter, letters, msg_from_dax,
         will_never_hear_again);

  printf("\n----\n");

  char *name = "mwavu";
  int age = 25;
  printf("hello, %s! you're %d years old.\n", name, age);

  const int legs = 2;
  const int hands = 2;

  printf("legs: %d\nhands: %d\n", legs, hands);

  return 0;
}
