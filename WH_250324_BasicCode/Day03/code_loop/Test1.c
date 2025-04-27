#include <stdio.h>

//求1-5的和
int main()
{
    int sum1 = 0;
    //for循环
    for(int i = 1;i <= 5;i++){
        sum1 += i;
    }
    printf("1-5的和为: %d\n",sum1);

    int sum2 = 0;
    //while循环
    int i = 1;
    while (i<=5)
    {
        sum2 += i;
        i++;
    }
    printf("1-5的和为: %d\n",sum2);
    
    return 0;
}