#include <cs50.h>
#include <stdio.h>

int main(void) {

  // string name = "Ali";
  // printf("%i %i %i %i\n", name[0], name[1], name[2], name[3]);

  string words[3];
  words[0] = "Hello";
  words[1] = "World";
  words[2] = "!";

  printf("%s %s%s\n", words[0], words[1], words[2]);
  printf("%p %p %p\n", words[0], words[1], words[2]);
}