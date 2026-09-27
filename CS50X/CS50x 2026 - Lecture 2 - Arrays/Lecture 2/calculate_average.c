#include <cs50.h>
#include <math.h>
#include <stdio.h>

float calculate_average(int length, int array[]);

int main(void) {
  int TOTAL = 3;
  int scores[TOTAL];

  for (int i = 0; i < TOTAL; i++) {
    scores[i] = get_int("Score: ");
  }

  float average = calculate_average(TOTAL, scores);
  printf("Average: %.2f\n", average);
}

float calculate_average(int length, int array[]) {
  float sum = 0;
  for (int i = 0; i < length; i++) {
    sum = sum + array[i];
  }
  return sum / length;
}