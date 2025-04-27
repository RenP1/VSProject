#include <stdio.h>

void function(){


}


//有参有返回值函数
int getSum(int a , int b){
    return a + b;
}


//有参有返回值函数 [形参是指针类型,返回值类型也是指针类型]
char* show(char *chs,double * num){


    return "Hello";
}
int main()
{
    void (*ptr1)()=function;
    int (*ptr2)(int,int) = getSum;
    int (*ptr3)() = main;
    char *(*ptr4)(char*,double*)=show;
    printf("main : %p\n",main);
    printf("%p\n",ptr3);
    printf("function : %p\n",function);
    printf("%p\n",ptr1);
    printf("getSum : %p\n",getSum);
    printf("%p\n",ptr2);
    printf("show : %p\n",show);
    printf("%p\n",ptr4);
    return 0;
}