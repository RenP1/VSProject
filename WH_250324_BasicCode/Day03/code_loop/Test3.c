#include <stdio.h>

//求1-100的奇数和 while
int main()
{
    int sum = 0;
    int i = 1;
    while (i<=100)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
        i++;
    }
    printf("1-100的奇数和为: %d",sum);
    return 0;
}