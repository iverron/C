#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool check_phrase(string phrase);

int main(void) {
  string phrase = get_string("What's the secret phrase? ");
  bool correct = check_phrase(phrase);

  if (correct == true) {
    printf("come on in\n");
  }
}

bool check_phrase(string phrase) {
  string password = "please";

  if (strcmp(phrase, password) == 0) {
    return true;
  }
  return false;
}
