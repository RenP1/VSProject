#include <stdio.h>
#include <stdbool.h>
/*
7. 通过回调函数的方式来实现,传入一个条件,如果数组中有一个元素符合条件,结果为true,否则为false
	如:int nums[]={1,2,3,4,5};条件为只要有一个与2整除,则返回true,否则为false
*/
bool conditions1(int *arr,int length,bool (*ptr)(int)){
    static bool = false;
    for (int i = 0; i < length; i++)
    {
        bool = conditions(arr[i]);
    }
    return b1;
}
bool conditions(int num){
    if (num%2==0)
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
    int nums[]={1,2,3,4,5};
    conditions1(nums,5,conditions1);
    return 0;
}