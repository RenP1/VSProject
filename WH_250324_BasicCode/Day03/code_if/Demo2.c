#include <stdio.h>

int main()
{
    printf("请输入您要查询的月份:\n"); 
    int month;
    scanf("%d",&month);
    if (month == 3 ||month == 4 || month == 5)
    {
       printf("您输入的月份: %d月是春季!\n",month);
    }else if (month == 6 ||month == 7 || month == 8)
    {
        printf("您输入的月份: %d月是夏季!\n",month);
    }else if (month == 9 ||month == 10 || month ==11)
    {
        printf("您输入的月份: %d月是秋季!\n",month);
    }else if (month == 12 ||month == 1 || month == 2)
    {
        printf("您输入的月份: %d月是冬季!\n",month);
    }else
    {
        printf("你输入的月份不存在!请重试\n");
    }
    return 0;
}