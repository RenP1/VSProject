#include <stdio.h>

/*1. 通过函数实现,数组中的数据转字符串
        如: int nums[]={10,20,30}; 调用函数后的结果:"102030"
*/
#include <stdio.h>
char *get_string(int *arr, int len) {
  static char str[100];
  sprintf(str, "%d%d%d", arr[0], arr[1], arr[2]);
  return str;
}
int main() {
  int nums[] = {10, 20, 30};
  int len = 3;
  char *str = get_string(nums, len);
  printf("%s\n", str);

  return 0;
}