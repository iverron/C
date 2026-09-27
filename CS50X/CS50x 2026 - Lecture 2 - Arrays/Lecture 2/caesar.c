#include <complex.h>
#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char rotate(char encryption, int shift);
int main(int argc, string argv[]) {

  if (argc != 2) {
    printf("Usage: ./caesar key\n");
    return 1;
  }
  for (int j = 0, length = strlen(argv[1]); j < length; j++) {

    if (!isdigit(argv[1][j])) {
      printf("Usage: ./caesar key\n");
      return 1;
    }
  }
  int number = atoi(argv[1]);
  string input = get_string("plaintext:  ");
  printf("ciphertext: ");
  for (int len = strlen(input), i = 0; i < len; i++) {
    char output = (rotate(input[i], number));
    printf("%c", output);
  }

  printf("\n");
  return 0;
}

char rotate(char encryption, int shift) {
  char key = encryption;
  if (isupper(encryption)) {
    key = (encryption - 'A' + shift) % 26 + 'A';
    return key;
  } else if (islower(encryption)) {
    key = (encryption - 'a' + shift) % 26 + 'a';
    return key;

  } else {
    return key;
  }
}