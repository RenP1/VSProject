#include <stdio.h>

//求1-5的和
int sum(int n){
    if (n==1)
    {
        return 1;
    }
    return sum(n-1)+n;
}
int main()
{
    printf("sum(5): %d\n",sum(5));
    return 0;
}