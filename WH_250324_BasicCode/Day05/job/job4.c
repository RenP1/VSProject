#include <stdio.h>

// 4.利用函数实现1-100之间所有的质数(需要输出这些质数即可)
int zhiShu(int num) {
  if (num == 1 || num ==2)
  {
    return 1;
  }
  
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main() {
  for (int i = 0; i <= 100; i++)
  {
    if (zhiShu(i) == 1)
    {
      printf("质数有: %d\n",i);
    }
  }
  
  return 0;
}