#include <stdio.h>
#include <stdbool.h>
/*
4. 通过函数实现数组是否满足所有条件的数据
	如: int nums[]={10,11,12,13,14,15};
	调用函数,传入相关条件,如果都大于10,则返回true,否则返回false
*/
bool meet(int *arr,int length){
	for (int i = 0; i < length; i++)
	{
		if (arr[i] <= 10)
		{
			return false;
		}
	}
	return true;	
}

int main()
{
    int nums[]={10,11,12,13,14,15};
	int length = sizeof nums /sizeof (int);
	meet(nums,length);
    return 0;
}