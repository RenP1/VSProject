#include <stdio.h>

//使用#define定义计算圆的面积
#define PI 3.14
int main()
{
    int r = 5;
    printf("圆的面积为: %.2lf",PI * r * r);
    return 0;
}