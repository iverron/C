#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) {

  if (argc != 2) {

    printf("Error: exactly one name must be provided after the command.\n");
    return 1;
  }
  printf("Hello %s\n", argv[1]);
  return 0;
}