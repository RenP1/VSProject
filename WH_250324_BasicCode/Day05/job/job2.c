#include <stdio.h>

//2.利用函数实现8以内的阶乘(可用递归实现)

int factorial(int n){
    if (n == 0)
    {
        return 1;
    }else{
        return n*factorial(n-1);
    }
    
}
int main()
{
    for (int i = 0; i <= 8; i++)
    {
        printf("%d! = %d\n", i, factorial(i));
    }
    
    return 0;
}