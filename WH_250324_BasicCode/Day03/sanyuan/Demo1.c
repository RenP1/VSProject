#include <stdio.h>

//录入两个数,比较最大值
int main()
{
    printf("请输入两个数 : \n");
    int x,y;
    scanf("%d %d",&x,&y);
    int max = x>y ? x : y;
    printf("两者最大值为: %d\n",max);
    return 0;
}