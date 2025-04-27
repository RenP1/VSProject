#include <stdio.h>

int main()
{
    printf("请输入您要查询的月份:\n"); 
    int month;
    scanf("%d",&month);
    switch (month)
    {
    case 1:
    printf("您输入的月份: %d月是冬季!\n",month);
        break;
    case 2:
    printf("您输入的月份: %d月是冬季!\n",month);
        break;
    case 3:
    printf("您输入的月份: %d月是春季!\n",month);
        break;
    case 4:
    printf("您输入的月份: %d月是春季!\n",month);
        break;
    case 5:
    printf("您输入的月份: %d月是春季!\n",month);
        break;
    case 6:
    printf("您输入的月份: %d月是夏季!\n",month);
        break;
        case 7:
    printf("您输入的月份: %d月是夏季!\n",month);
        break;
        case 8:
    printf("您输入的月份: %d月是夏季!\n",month);
        break;
        case 9:
    printf("您输入的月份: %d月是秋季!\n",month);
        break;
        case 10:
    printf("您输入的月份: %d月是秋季!\n",month);
        break;
        case 11:
    printf("您输入的月份: %d月是秋季!\n",month);
        break;
        case 12:
    printf("您输入的月份: %d月是冬季!\n",month);
        break;
    
    default:
    printf("你输入的月份不存在!请重试\n");
        break;
    }
    return 0;
}