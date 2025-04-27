#include <stdio.h>

    const double PI = 3.14;
int main()
{
    //求圆的面积
    int r = 2;
    double area = PI * r *r;
    printf("圆的面积是:%.2lf\n",area);
    return 0;
}