#include <stdio.h>
void pyramid(int bricks);
int main(void) {

  int height;
  do {
    printf("Height: ");
    scanf("%i", &height);

  } while (height > 8 || height < 1);
  for (int i = 1; i <= height; i++) {
    pyramid(i);
  }
}
void pyramid(int bricks) {

  for (int i = 0; i < bricks; i++) {
    printf("#");
  }
  printf("\n");
}
