#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
bool is_positive(int number);
int main(void) {

  int input = get_int("Number: ");
  if (is_positive(input)) {
    printf("Positive number\n");

  } else {
    printf("Not a positive number\n");
  }
}
bool is_positive(int number) { return number > 0; }