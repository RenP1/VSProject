#include <stdio.h>
#include <stdlib.h>
/*通过函数实现,把两个数组中的数据进行合并
        如: int nums1[]={10,20,30};
             int nums2[]={100,200,300};
             调用函数后的结果: {10,20,30,100,200,300};*/
int *mergeArrays(int *arr1, int *arr2, int length1, int length2) {
  int length = length1 + length2;
  int *arr = (int *)malloc(length * sizeof(int));
  for (int i = 0; i < length1; i++) {
    arr[i] = arr1[i];  // 直接复制第一个数组
  }

  for (int i = 0; i < length2; i++) {
    arr[length1 + i] = arr2[i];  // 接着复制第二个数组
  }

  return arr;
}
int main() {
  int nums1[] = {10, 20, 30};
  int nums2[] = {100, 200, 300};
  int *arr = mergeArrays(nums1, nums2, 3, 3);
  for (int i = 0; i < 6; i++) {
    printf("%d \n", arr[i]);
  }

  return 0;
}