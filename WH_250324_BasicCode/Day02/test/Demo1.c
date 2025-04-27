#include <stdio.h>

//自己声明布尔类型
#define Bool int
#define TRUE 1
#define FALSE 0
int main()
{
    Bool flag = TRUE;
    flag = FALSE;
    if (flag)
    {
        printf("看看我执行没?\n");
    }
    
    return 0;
} 