#include <stdio.h>

int main()
{
    double num1;
    double num2;
    printf("请输入第一个数字:\n");
    scanf("%lf",&num1);
    printf("请输入第二个数字:\n");
    scanf("%lf",&num2);
    printf("两数之和: %lf",num1+num2);
    return 0;
}