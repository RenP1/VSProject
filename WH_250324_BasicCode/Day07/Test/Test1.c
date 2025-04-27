#include <stdio.h>

//创建一个int类型的变量，使用取址运算符取出其地址，并将其地址赋值给一个指针，然后分别打印变量的值、变量的地址、指针的值、指针的地址、指针指向的值。
int main()
{
    int num = 100;
    int *ptr = &num;
    printf("变量的值: %d\n",num);
    printf("变量的地址: %p\n",&num);
    printf("指针的值: %p\n",ptr);
    printf("指针的地址: %p\n",&ptr);
    printf("指针指向的值: %d\n",*ptr);
    return 0;
}