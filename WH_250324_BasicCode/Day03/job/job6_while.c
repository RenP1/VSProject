#include <stdio.h>

// 请使用while、do—while 三种形式打印1000——9999年内所有的闰年。
int main() {
  int year = 1000;
  while (year <= 9999) {
    if (year % 4 == 0) {
      printf("1000——9999年内的闰年有:%d \n", year);
    }
    year++;
  }

    return 0;
}