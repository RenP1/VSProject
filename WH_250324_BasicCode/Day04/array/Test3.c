#include <stdio.h>
/*
数组元素查找：键盘录入一个数，找这个数在数组中第一次出现的索引位置，如果不存在于数中则告知不存在！
*/
int main() {
  printf("请输入一个数:\n");
  int num;
  scanf("%d", &num);
  int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
  int length = sizeof arr / sizeof(int);
  int flag = -1;
  for (int i = 0; i < length; i++) {
    if (num == arr[i]) {
      flag = i;
      break;
    }
  }
  if (flag == -1) {
    printf("这个数不存在于数组中!\n");
  } else {
    printf("数字%d在数组中第一次出现的索引为:%d\n", num, flag);
  }

  return 0;
}