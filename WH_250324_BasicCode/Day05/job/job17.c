#include <stdio.h>

//17.利用函数实现5以内的阶乘之和
int factorial(int n){
    int sum = 0;
    if (n == 1)
    {
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        sum += factorial(n-1)*n;
    }
    return sum;
}
int main()
{
    printf("5以内的阶乘之和: %d\n",factorial(5));
    return 0;
}