#include <stdio.h>

// 数组元素求最值
int main() {
  int arr[] = {1, 2, 3, 5, 4};
  int length = sizeof arr / sizeof(int);
  int max = arr[0];
  int min = arr[0];
  for (int i = 0; i < length; i++) {
    if (arr[i] >= max) {
      max = arr[i];
    } else if (arr[i] <= min) {
      min = arr[i];
    }
  }
  printf("数组中最大的元素为: %d\n", max);
  printf("数组中最小的元素为: %d\n", min);
  return 0;
}