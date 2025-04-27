#include <stdio.h>
/*
        *
       * *
      *   *
     *******

     通过键盘录入行号 打印指定的空心三角形

    *
    ***
    *****
    *******
    行和列的关系 : 2n-1

       *
      ***
     *****
    *******

    总行数 : 4
    第一行 : 3个空格
    第二行 : 2个空格
    第三行 : 1个空格
    第四行 : 0个空格

    空格数量 : 4 - n

        *
       * *
      *   *
     *******


*/
int main() {
  printf("请您输入您要打印的空心三角形行数 : \n");
  int row;
  scanf("%d", &row);
  for (int j = 1; j <= row; j++)  // 行
  {
    for (int i = 1; i <= row - j; i++) {
      printf(" ");
    }

    for (int i = 1; i <= j * 2 - 1; i++)  // 列
    {
      if (i == 1 || i == j * 2 - 1 || j == row) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}