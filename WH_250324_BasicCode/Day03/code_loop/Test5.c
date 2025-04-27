#include <stdio.h>

int main() {
  int count = 0;
  for (int i = 10000; i <= 99999; i++) {
    int ge = i % 10;
    int shi = (i / 10) % 10;
    int qian = (i / 1000) % 10;
    int wan = i / 10000;
    if (ge == wan && shi == qian) {
      printf("回文数:%d ", i);
      count++;
      if ((count % 5) == 0) {
        printf("\n");
      }
    }
  }
  printf("回文数有%d个", count);
  return 0;
}