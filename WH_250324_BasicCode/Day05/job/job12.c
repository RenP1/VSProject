#include <stdio.h>

// 12.利用函数实现传入行数,显示等腰空心的三角形
void print_triangle(int rows) {
  for (int j = 1; j <= rows; j++)  // 第几行
  {
    for (int i = 0; i < rows - j; i++) {
      printf(" ");
    }

    for (int i = 1; i <= 2 * j - 1; i++) {
      if (i == 1 || i == 2 * j - 1 || j == rows) {
        printf("*");
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }
}
int main() {
  printf("请输入等腰空心三角形的行数: \n");
  int rows;
  scanf("%d", &rows);
  print_triangle(rows);
  return 0;
}