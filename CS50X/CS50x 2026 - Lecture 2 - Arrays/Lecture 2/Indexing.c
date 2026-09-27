#include <cs50.h>
#include <stdio.h>
int counting(string words);
int main(void) {

  string words = "hello my name is Verron";

  for (int i = 0; i < counting(words); i++) {
    printf("%c\n", words[i]);
  }
  printf("Number of characters: %i\n", counting(words));
}

int counting(string words) {
  int count = 0;
  for (int i = 0; words[count] != '\0'; count++) {
  }
  return count;
}