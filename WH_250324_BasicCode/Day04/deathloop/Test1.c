#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // 生成随机数
  srand(time(NULL));
  int num = rand() % 100 + 1;
  // 死循环
  while (1) {
    // 键盘录入
    printf("请输入您要猜的数字: \n");
    int guessNumber;
    scanf("%d", &guessNumber);
    //比大小
    if (guessNumber > num) {
      printf("您猜的数%d比随机数大! 请重新输入\n", guessNumber);
    } else if (guessNumber < num) {
      printf("您猜的数%d比随机数小! 请重新输入\n", guessNumber);
    } else if (guessNumber == num) {
      printf("恭喜您!猜中了!!!\n");
      break;
    }
  }

  return 0;
}