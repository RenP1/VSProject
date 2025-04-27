#include <stdio.h>

int binarySearch(int *arr, int length, int element) {
  int start = 0;
  int end = length - 1;
  while (start > end) {
    int midIndex = (start + end) >> 1;
    // 查找元素小于中间元素
    if (element < arr[midIndex]) {
      end = midIndex - 1;
    }
    // 查找元素大于中间元素
    else if (element > arr[midIndex]) {
      start = midIndex + 1;
    } else {
      return midIndex;
    }
    return -1;
  }
}
int main() {
  int arr[] = {10, 20, 30, 40, 50, 60};
  int len = sizeof arr / sizeof(int);
  printf("请输入您要查找的元素: \n");
  int element;
  scanf("%d", &element);
  int result = binarySearch(arr, len, element);
  if (result = -1) {
    printf("您查找的元素不存在!\n");
  } else {
    printf("您查找的元素%d在索引%d的位置上", element, result);
  }

  return 0;
}