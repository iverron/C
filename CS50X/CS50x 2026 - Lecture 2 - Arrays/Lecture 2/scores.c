#include <cs50.h>
#include <stdio.h>

float average(int length, int number[]);
int main(void) {
  const int N = 5;
  int score[N];
  for (int i = 0; i < N; i++) {
    score[i] = get_int("Please Enter Your Number: ");
  }
  printf("Score: %f\n", average(N, score));
}

float average(int length, int number[]) {

  float sum = 0;
  for (int i = 0; i < length; i++) {
    sum += number[i];
  }
  return sum / length;
}
