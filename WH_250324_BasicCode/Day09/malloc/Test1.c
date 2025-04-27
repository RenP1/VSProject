#include <stdio.h>
#include <stdlib.h>

//动态创建数组，输入5个学生的成绩，再定义一个函数检则成绩低于60分的，输出不合格的成绩
void getScore(int *arr,int length){
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < 60)
        {
            printf("不合格的成绩: %d\n",arr[i]);
        }
    }
}
int main()
{
    int *ptr = (int *)calloc(5,4);
    for (int i = 0; i < 5; i++)
    {
        printf("请输入第%d个学生的成绩: \n",i+1);
        scanf("%d",ptr+i);
    }
    getScore(ptr,5);
    return 0;
}