#include <stdio.h>

// 实现判断一个整数，属于哪个范围：大于0；小于0；等于0。
int main() {
  printf("请输入一个整数:\n");
  int num;
  scanf("%d", &num);
  if (num > 0) {
    printf("该数大于0");
  } else if (num < 0) {
    printf("该数小于0");
  } else if (num == 0) {
    printf("该数等于0");
  }

  return 0;
}