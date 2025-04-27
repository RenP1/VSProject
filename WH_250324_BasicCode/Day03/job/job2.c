#include <stdio.h>

// 判断一个年份是否为闰年
int main() {
  printf("请输入一个年份:\n");
  int year;
  scanf("%d", &year);
  if (year % 4 == 0) {
    printf("该年份是闰年!\n");
  } else if (year % 4 != 0) {
    printf("该年份不是是闰年!\n");
  }
}