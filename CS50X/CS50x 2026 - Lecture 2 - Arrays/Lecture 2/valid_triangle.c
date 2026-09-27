#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
bool valid_triangle(float side1, float side2, float side3);
int main(void) {
  float input_one = get_float("Please Enter Side One:   ");
  float input_two = get_float("Please Enter Side Two:   ");
  float input_three = get_float("Please Enter Side Three: ");
  bool output = valid_triangle(input_one, input_two, input_three);
  if (output) {
    printf("Valid triangle\n");
  } else {
    printf("Invalid triangle\n");
  }
}
bool valid_triangle(float side1, float side2, float side3) {

  if (side1 <= 0 || side2 <= 0 || side3 <= 0) {

    return false;
  }
  if (side1 + side2 <= side3 || side2 + side3 <= side1 ||
      side3 + side1 <= side2) {
    return false;
  }
  return true;
}