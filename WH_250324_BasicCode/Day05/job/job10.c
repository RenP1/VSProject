#include <stdio.h>

// 10.利用函数实现某个数据在数组中是否存在(如果存在则返回该数据的索引,没有则返回-1)
int find(int arr[], int length, int num) {
  int temp = -1;
  for (int i = 0; i < length; i++) {
    if (num == arr[i]) {
      temp = i;
      return temp;
    }
  }
  if (temp == -1) {
    return -1;
  }
}

int main() {
  int arr[] = {2, 3, 5, 8, 7};
  int length = sizeof arr / sizeof(int);
  printf("%d", find(arr, length, 7));
  return 0;
}