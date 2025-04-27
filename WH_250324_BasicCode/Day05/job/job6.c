#include <stdio.h>

//6.利用函数求三个数字中的最大值(需要输出显示)
double max(double a,double b,double c){
    int max = a;
    if (max<b)
    {
        max = b;
    }
    if (max<c)
    {
        max = c;
    }
    return max;
    
}
int main()
{
    printf("请输入三个数字: \n");
    double num1;
    double num2;
    double num3;
    scanf("%.2lf %.2lf %.2lf",&num1,&num2,&num3);
    printf("三者中的最大值为: %d",max(num1,num2,num3));
    return 0;
}