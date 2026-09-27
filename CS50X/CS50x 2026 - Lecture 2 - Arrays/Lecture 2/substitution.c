#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool validation(string key);
int main(int argc, string argv[]) {

  string input;
  if (argc != 2) {
    printf("Usage: ./substitution key\n");
    return 1;
  }
  string key = argv[1];
  if (validation(key) == false) {
    printf("Key must contain 26 characters.\n");
    return 2;
  }

  input = get_string("plaintext: ");
  printf("ciphertext: ");

  for (int i = 0, len = strlen(input); i < len; i++) {
    if (!isalpha(input[i])) {

      printf("%c", input[i]);
    } else {

      if (isupper(input[i])) {
        int idx_one = toupper(input[i]) - 65;
        printf("%c", toupper(key[idx_one]));
      } else if (islower(input[i])) {
        int idx_two = tolower(input[i]) - 97;
        printf("%c", tolower(key[idx_two]));
      }
    }
  }
  printf("\n");
  return 0;
}

bool validation(string key) {

  int length = strlen(key);
  int unique[26] = {0};
  if (length != 26) {
    return false;
  }
  for (int i = 0; i < length; i++) {
    if (!isalpha(key[i])) {
      return false;
    }
    int idx = toupper(key[i]) - 65;
    if (unique[idx] == 1) {
      return false;
    }
    unique[idx] = 1;
  }
  return true;
}