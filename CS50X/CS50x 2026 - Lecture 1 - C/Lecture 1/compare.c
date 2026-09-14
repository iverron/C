
#include <cs50.h>
#include <stdio.h>

int main(void) {

  int x = get_int("What's X?");
  int y = get_int("What's's Y?");

  if (x < y) {
    printf("x less than y\n");
  } else if (x > y) {
    printf("x is greater than y\n");
  } else {
    printf("x is equal to y!\n");
  }
}