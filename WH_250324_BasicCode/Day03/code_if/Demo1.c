#include <stdio.h>

int main()
{
    printf("请输入三个数 : \n");
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if (x>y)
    {
        if (x>z)
        {
            //x>y>z
            printf("最大值为: %d",x);
        }else{
            //z>x>y
            printf("最大值为: %d",z);
        } 
    }else
    {
        if (y>z)
        {
            printf("最大值为: %d",y);
        }else{
            printf("最大值为: %d",z);
        }
        
    }
    
    return 0;
}