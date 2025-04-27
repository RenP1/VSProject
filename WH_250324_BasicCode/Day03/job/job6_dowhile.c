#include <stdio.h>

int main() {
  int year = 1000;
  do {
    if (year % 4 == 0) {
      printf("1000——9999年内的闰年有:%d \n", year);
    }
    year++;
  } while (year <= 9999);
  return 0;
}