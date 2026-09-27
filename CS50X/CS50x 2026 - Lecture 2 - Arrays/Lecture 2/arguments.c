#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int age = atoi(argv[1]);

  if (argc < 2) {
    printf("Error: Please provide your age.\n");
    return 1;
  }

  printf("Next year you will be %d years old.\n", age + 1);
  return 0;
}