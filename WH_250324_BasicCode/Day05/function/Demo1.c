#include <stdio.h>
// 用函数打印HelloWorld
void helloWorld() {
  for (int i = 0; i < 10; i++) {
    printf("HelloWorld\n");
  }
}
int main() {
  printf("开始\n");
  helloWorld();
  printf("结束\n");
  return 0;
}