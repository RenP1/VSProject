#include <stdio.h>
/*
5. 通过函数实现数中有没有满足条件的数据
	如: int nums[]={10,11,12,13,14,15};
	调用函数,传入相关条件,找到大于12的所有数据,或者找到所有的偶数数据
*/
void meet(int *arr,int length){
	int i =0;
	while (i<length)
	{
		if (arr[i] >12)
		{
			printf("大于12的num: %d\n",arr[i]);
		}
		i++;
	}
	int j = 0;
	while (j<length)
	{
		if (arr[j]%2==0)
		{
			printf("偶数数据: %d\n",arr[j]);
		}
		j++;
	}
}

int main()
{
    int nums[]={10,11,12,13,14,15};
	int length = sizeof nums / sizeof nums[0];
	meet(nums,length);
    return 0;
}