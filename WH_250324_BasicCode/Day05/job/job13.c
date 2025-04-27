#include <stdio.h>

// 13.利用函数计算1-100之前所有奇数和
int sum(int n) {
  if (n == 1) {
    return 1;
  }
  if (n % 2 == 0) {
    n--;
    return sum(n - 2) + n;
  }
}
int main() {
  printf("1-100之间所有奇数数和: %d\n", sum(100));
  return 0;
}