#include <stdio.h>

//求1-100的偶数和 for
int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("1-100的偶数和为: %d",sum);
    
    return 0;
}