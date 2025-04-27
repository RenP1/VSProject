#include <stdio.h>

// 编写程序，根据输入的月份和年份，求出该月的天数（1-12）,
// 就是需要考虑闰年（2月份 29）和平年（2月份 28）。
int main() {
  printf("请输入年份和月份:\n");
  int month;
  int year;
  scanf("%d %d", &year, &month);
  if (year % 4 == 0) {
    switch (month) {
      case 1:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 2:
        printf("%d年%d月有29天!\n", year, month);
        break;
      case 3:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 4:
        printf("%d年%d月有30天!\n", year, month);
        break;
      case 5:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 6:
        printf("%d年%d月有30天!\n", year, month);
        break;
      case 7:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 8:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 9:
        printf("%d年%d月有30天!\n", year, month);
        break;
      case 10:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 11:
        printf("%d年%d月有30天!\n", year, month);
        break;
      case 12:
        printf("%d年%d月有31天!\n", year, month);
        break;
      default:
        printf("您输入的月份不对,请重试!\n");
        break;
    }
  } else if (year % 4 != 0) {
    switch (month) {
      case 1:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 2:
        printf("%d年%d月有28天!\n", year, month);
        break;
      case 3:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 4:
        printf("%d年%d月有30天!\n", year, month);
        break;
      case 5:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 6:
        printf("%d年%d月有30天!\n", year, month);
        break;
      case 7:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 8:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 9:
        printf("%d年%d月有30天!\n", year, month);
        break;
      case 10:
        printf("%d年%d月有31天!\n", year, month);
        break;
      case 11:
        printf("%d年%d月有30天!\n", year, month);
        break;
      case 12:
        printf("%d年%d月有31天!\n", year, month);
        break;
      default:
        printf("您输入的月份不对,请重试!\n");
        break;
    }
  }
}