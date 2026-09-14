#include <cs50.h>
#include <stdio.h>
void print_row(int bricks);
int main(void) {

  int hash = get_int("Height: ");

  for (int i = 0; i < hash; i++) {

    print_row(i);
  }
}

void print_row(int bricks) {

  for (int i = 0; i < bricks; i++) {

    printf("#");
  }
  printf("\n");
}