#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
void meow(int times) {

  for (int i = 0; i < times; i++) {
  }
  printf("Meow\n");
}

int main(void) {
  int n = get_int("What's N? ");
  meow(n);

  for (int i = 0; i < n; i++) {

    meow(n);
  }
}
