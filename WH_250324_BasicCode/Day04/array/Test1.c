#include <stdio.h>

// 数组元素求和
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int sum = 0;
  int length = sizeof arr / sizeof(int);
  for (int i = 0; i < length; i++) {
    sum += arr[i];
  }
  printf("这个数组元素的和为: %d\n", sum);
  return 0;
}