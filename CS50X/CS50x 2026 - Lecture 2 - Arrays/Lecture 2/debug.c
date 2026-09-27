#include <stdio.h>

int add_five(int number);

int main(void) {
  int current_value = 10;

  current_value = add_five(current_value);

  printf("Updated value: %d\n", current_value);

  return 0;
}

int add_five(int number) {
  number = number + 5;
  return number;
}