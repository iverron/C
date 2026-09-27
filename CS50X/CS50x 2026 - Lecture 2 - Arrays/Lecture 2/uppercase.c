#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  string input = get_string("Before: ");
  printf("After:  ");
  for (int i = 0, n = strlen(input); i < n; i++) {

    printf("%c", toupper(input[i]));
  }
  printf("\n");
}