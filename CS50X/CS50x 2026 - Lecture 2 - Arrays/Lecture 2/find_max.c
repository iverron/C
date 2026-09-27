#include <stdio.h>
int find_max(int a, int b);
int main(void) {
  int input_one = 0;
  int input_two = 0;
  printf("Enter first number: ");
  scanf("%i", &input_one);
  printf("Enter second number: ");
  scanf("%i", &input_two);

  printf("Maximum value is: %i\n", find_max(input_one, input_two));
}

int find_max(int a, int b) {

  if (a < b) {
    return b;
  } else {
    return a;
  }
}