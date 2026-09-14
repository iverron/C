#include <stdio.h>

int main(void) {

  int coins = 0;
  int input;
  int quarters = 25;
  int dimes = 10;
  int nickels = 5;
  int pennies = 1;
  do {
    printf("Change owed: ");
    scanf("%i", &input);
  } while (input < 0);
  while (input >= quarters) {
    input -= quarters;
    coins++;
  }
  while (input >= dimes) {
    input -= dimes;
    coins++;
  }
  while (input >= nickels) {
    input -= nickels;
    coins++;
  }
  while (input >= pennies) {
    input -= pennies;
    coins++;
  }
  printf("number of coins: %i\n", coins);
}