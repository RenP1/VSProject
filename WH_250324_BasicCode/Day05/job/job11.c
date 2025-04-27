#include <stdio.h>

//11.利用函数实现传入行数,显示等腰实心的三角形
void print_triangle(int rows){
    for (int j = 1; j <= rows; j++)//第几行
    {
        for (int i = 0; i < rows-j; i++)
        {
            printf(" ");
        }
        
        for (int i = 0; i < 2*j-1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    printf("请输入等腰实心三角形的行数: \n");
    int rows;
    scanf("%d",&rows);
    print_triangle(rows);
    return 0;
}