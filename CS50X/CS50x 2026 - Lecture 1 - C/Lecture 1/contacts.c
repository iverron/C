#include <cs50.h>
#include <stdio.h>

int main(void) {
  string name = get_string("Name: ");
  int age = get_int("Age: ");
  string phone_number = get_string("Phone Number: ");
  string address = get_string("Location: ");

  printf("======================\n");
  printf("Name: %s\n", name);
  printf("Age: %i\n", age);
  printf("Phone Number: %s\n", phone_number);
  printf("Location: %s\n", address);
  printf("%s, %i, lives in %s and can be reached at %s.\n", name, age, address,
         phone_number);
  printf("======================\n");
}