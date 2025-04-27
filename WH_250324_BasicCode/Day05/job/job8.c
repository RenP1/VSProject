#include <stdio.h>

//8.利用函数实现1-100之间所有数字和
int sum(int n){
    if (n==1)
    {
        return 1;
    }
    return sum(n-1)+n;
}
int main()
{
    printf("1-100之间所有数字和: %d\n",sum(100));
    return 0;
}