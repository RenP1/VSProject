#include <stdio.h>
/*
9.通过回调函数的方式来实现,任意两个数据可以进行加减乘除,要求,不能使用指针函数来获取计算结果
*/
int num(int (*ptr)(int,int),int a,int b){
    int num = ptr(a,b);
    return num;
}
int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int divide(int a,int b){
    return a/b;
}
int multiply(int a,int b){
    return a*b;
}
int main()
{
    
    return 0;
}