#include <stdio.h>

/*
3. 通过函数指针实现,遍历数组数据操作
        如: int nums[]={10,20,30};
        调用函数后,可以遍历数组中所有的数据
*/
void traverseGroups(int *arr, int length) {
  for (int i = 0; i < length; i++) {
    printf("num : %d\n", arr[i]);
  }
}
int main() {
  int nums[] = {10, 20, 30};
  traverseGroups(nums, 3);
  return 0;
}