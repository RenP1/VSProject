#include <stdio.h>

int main()
{
    int num1 = 100;
    int num2 = 200;
    int num3 = 300;
    int* arr[3] = {&num1,&num2,&num3};
    int length = sizeof arr/sizeof (int*);
    for (int i = 0; i < length; i++)
    {
        int* ptr = arr[i];
        printf("指针数组中指针指向的内存地址的值为: %d\n",*ptr);
    }
    
    return 0;
}