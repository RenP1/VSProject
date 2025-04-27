#include <stdio.h>

void jiaoHuan(int a, int b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}
// 14.利用函数实现交换两个变量的值(最少两种写法)
int main() {
  int a = 10;
  int b = 20;
  jiaoHuan(a, b);
  printf("a: %d , b: %d",a,b);
  return 0;
}