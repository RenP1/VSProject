#include <stdio.h>

/*
6.通过回调函数的方式来实现,传入一个索引,可以把该索引位置后面所有的数组元素进行截取操作,并返回截取后的数组
        如:int nums[]={10,20,30,40,50};调用函数的时候传入一个2,其结果为:一个新的数组{30,40,50};
    */
int *arr subArr(int index, int *arr){
    int length = sizeof arr / sizeof(int);
    static int arr1[length - index+1];
    for (int i = index,j=0; i < length; i++,j++)
    {
        arr1[j]=arr[i];
    }
    return arr1;
}

int main() {
  int nums[] = {10, 20, 30, 40, 50};
  int *result = subArr(2,nums);
  for (int i = 0; i < length; i++)
  {
    printf("result[%d] : %d",i,result[i]);
  }
  
  return 0;
}