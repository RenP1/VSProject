#include <stdio.h>

//使用const定义一个常量计算圆的面积
int main()
{
    const double PI = 3.14;
    int r = 5;
    printf("圆的面积为: %.2lf",PI * r * r);
    return 0;
}