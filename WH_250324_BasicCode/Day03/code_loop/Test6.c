#include <stdio.h>

int main() {
  int count = 0;
  double i = 0.0001;
  while (i < 8848) {
    count++;
    i *= 2;
  }
  printf("一共折了%d次\n", count);

  return 0;
}