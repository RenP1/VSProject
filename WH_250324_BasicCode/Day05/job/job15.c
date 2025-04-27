#include <stdio.h>

// 15.利用函数实现一个数字是否可以被7整除
void cu(int num) {
  if (num % 7 == 0) {
    printf("这个数能被7整除\n");
  } else {
    printf("这个不数能被7整除\n");
  }
}
int main() {
  printf("请输入一个数字: \n");
  int num;
  scanf("%d", &num);
  cu(num);
  return 0;
}