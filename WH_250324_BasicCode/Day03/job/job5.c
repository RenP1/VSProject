#include <stdio.h>

// 输入星期几(数字1-7)，如果是星期一到星期三，打印：AAA，星期四到星期五，打印：
// BBB，星期六到星期日，打印CCC，如果都不是，提示“输入错误”。
int main() {
  printf("请输入星期数:\n");
  int week;
  scanf("%d", &week);
  if (week == 1 || week == 2 || week == 3) {
    printf("AAA");
  }else if (week == 4 || week == 5)
  {
    printf("BBB");
  }else if (week == 6 || week == 7)
  {
    printf("CCC");
  }else{
    printf("输入错误\n");
  }
  return 0;
}