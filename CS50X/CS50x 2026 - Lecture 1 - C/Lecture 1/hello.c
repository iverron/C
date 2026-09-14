#include <stdio.h>

int main(void) {

  char name[] = "Ali";
  printf("Hello %s!\n", name);
  int balance = 50;
  balance++;
  printf("Balance: %i\n", balance);
  int balance_two = 50;
  balance_two--;
  printf("Balance:%i\n", balance_two);
  int balance_three = 50;
  balance_three %= 2;
  printf("Balance: %i\n", balance_three);
  float balance_four = 50;
  balance_four /= 4;
  printf("Balance: %.1f\n", balance_four);
}