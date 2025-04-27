#include <stdio.h>

//3.利用函数实现斐波那契数列(可用递归)
#include <stdio.h>

int fib(int n){
    if (n==1 || n==2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    printf("fib(20): %d\n",fib(20));
    return 0;
}