#include <stdio.h>

// 1.利用函数求数组中数据和,最大值,最小值
int sum(int arr[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += arr[i];
  }
  return sum;
}

int max(int arr[], int length) {
  int max = arr[0];
  for (int i = 0; i < length; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int min(int arr[], int length) {
  int min = arr[0];
  for (int i = 0; i < length; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}

int main() {
  int arr[] = {5, 6, 8, 9, 15};
  int length = sizeof arr / sizeof(int);
  printf("数组的和为: %d\n",sum(arr,length));
  printf("数组中的最大值为: %d\n",max(arr,length));
  printf("数组中的最小值为: %d\n",min(arr,length));
  return 0;
}