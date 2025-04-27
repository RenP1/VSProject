#include <stdio.h>

int main() {
  for (int i = 1000; i <= 9999; i++) {
    if (i % 4 == 0) {
      printf("1000——9999年内的闰年有:%d \n", i);
    }
    i++;
  }
  return 0;
}