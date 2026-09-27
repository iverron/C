#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
bool is_even(int input);
int main(void) {
  int input_number = get_int("Please Enter Your Number: ");
  if (is_even(input_number)) {
    printf("TRUE\n");
  } else {
    printf("FALSE\n");
  }
}
bool is_even(int input) { return input % 2 == 0; }