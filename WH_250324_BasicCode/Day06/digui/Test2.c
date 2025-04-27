#include <stdio.h>

//求1-10 的阶乘
int multiplication (int n){
    if (n==1)
    {
        return 1;
    }
    return multiplication(n-1)*n;
}
int main()
{
    printf("multiplication (10): %d\n",multiplication(10));
    return 0;
}