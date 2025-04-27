#include <stdio.h>

// 求出1-1/2+1/3-1/4…..1/100的和
int main() {
  int sum = 0;
  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
      sum += i + 1;
    } else if (i % 2 != 0) {
      sum += i - 1;
    }
  }
  printf("和为: %d", sum);

  return 0;
}