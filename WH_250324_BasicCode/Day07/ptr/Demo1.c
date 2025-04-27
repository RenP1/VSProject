#include <stdio.h>

int main()
{
    int num = 100;
    int *ptr = &num;

    printf("num变量的值: %d\n",num);
    printf("ptr指针变量存储的内存地址: %p\n",ptr);
    printf("num变量的内存地址: %p\n",&num);
    printf("ptr指针变量自己的内存地址: %p\n",&ptr);
    printf("ptr指针变量存储的内存地址的解引用(取值): %d\n",*ptr);
    return 0;
}