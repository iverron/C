#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  string name = get_string("Name: ");

  //   int n = 0;
  //   while (name[n] != '\0') {
  //     n++;
  //   }
  int length = strlen(name);
  printf("Number of characters: %i\n", length);
}