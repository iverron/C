#include <stdio.h>
float convert_to_fahrenheit(float celsius);
int main(void) {
  float celsius_temp = 0.f;
  printf("please enter your tempt: ");
  scanf("%f", &celsius_temp);
  float fahrenheit_temp = convert_to_fahrenheit(celsius_temp);
  printf("Celsius: %.1f C -> Fahrenheit: %.1f F\n", celsius_temp,
         fahrenheit_temp);

  return 0;
}

float convert_to_fahrenheit(float celsius) { return (celsius * 1.8f) + 32.0f; }