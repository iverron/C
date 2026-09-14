#include <cs50.h>
#include <stdio.h>
int main(void) {
  int number;
  printf("%p\n", &number);
  printf("please enter your number: ");
  scanf("%i", &number);
  for (int i = 1; i <= number; i++) {
    printf("%i\n", i);
  }
}
