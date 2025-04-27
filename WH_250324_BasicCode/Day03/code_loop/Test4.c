#include <stdio.h>

int main() {
  int count = 0;
  for (int i = 100; i <= 999; i++) {
    int ge = i % 10;
    int shi = (i / 10) % 10;
    int bai = (i / 100) % 10;
    int num = ge * ge * ge + shi * shi * shi + bai * bai * bai;
    if (num == i) {
      printf("%d\n", i);
      count++;
    }
  }
  printf("一共有%d个水仙花数", count);

  return 0;
}