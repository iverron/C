#include <stdio.h>

int apply_bonus(int score) { return score = score + 50; }

int main(void) {
  int score_one = 100;
  int save = apply_bonus(score_one);
  printf("Final score: %d\n", save);
  return 0;
}