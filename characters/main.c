#include <stdio.h>

/**
 * @brief Calculate Length of Null-Terminated String
 *
 * Counts characters in a string till it finds the
 * null terminator ('\0').
 *
 * @param ptr_to_first_item Pointer to first character
 * of the string.
 *
 * @return Integer. Number of characters in the string,
 * excluding the null terminator.
 *
 * @note This function assumes the input is a valid
 * null-terminated string.
 *
 * @warning Passing non-null-terminated array will cause
 * undefined behavior.
 *
 * @example
 * char greeting[] = "hello";
 * int greeting_len = str_len(&greeting[0]);
 **/
int str_len(char *ptr_to_first_item) {
  int count = 0;

  while (*(ptr_to_first_item + count) != '\0') {
    ++count;
  }

  return count;
}

/**
 * @brief Print ASCII
 *
 * @return Integer. 0 if success.
 *
 * @example
 * print_ascii();
 */
int print_ascii() {
  // NOTE: strings are null-terminated, so length of
  // an array of strings should be the real length + 1
  char upper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char lower[27] = "abcdefghijklmnopqrstuvwxyz";

  printf("\n----ASCII----\nascii for upper:\n");

  for (int i = 0; i < str_len(&upper[0]); ++i) {
    printf("%c: %d, i = %d\n", upper[i], upper[i], i);
  }

  printf("\nascii for lower:\n");

  for (int i = 0; i < str_len(&lower[0]); ++i) {
    printf("%c: %d, i = %d\n", lower[i], lower[i], i);
  }

  printf("\n----full ascii table----");
  for (int i = 0; i < 128; ++i) {
    printf("'%c': %d\n", i, i);
  }

  return 0;
}

int main() {
  char letter = 'A';
  printf("fav letter is '%c', and in ascii it is '%d'\n", letter, letter);

  char name[] = "mwavu";
  printf("hello, %s!\n", name);

  printf("first letter in name is: '%c'\n", name[0]);
  printf("the length of name is: %d\n", str_len(&name[0]));

  print_ascii();

  return 0;
}
