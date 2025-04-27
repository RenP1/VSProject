#include <stdio.h>

//比较三个数字大小
int main()
{
    printf("请输入三个数 : \n");
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int temp = x>y ? x : y;
    int max = temp>z ? temp : z;
    printf("三者最大值为: %d\n",max);
    return 0;
}