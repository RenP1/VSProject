#include <stdio.h>

int main() {
  // 遍历数组
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int length = sizeof arr / sizeof(int);
  for (int i = 0; i < length; i++) {
    printf("arr数组的第%d个元素为: %d\n", i + 1, arr[i]);
  }
  return 0;
}