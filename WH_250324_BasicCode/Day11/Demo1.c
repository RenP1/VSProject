#include <stdio.h>

int main()
{
    //打开文件
    FILE *file = fopen("aaa.txt","w");
    //写入内容
    fputs("南村群童欺我老无力\n",file);
    fputs("生命因何而沉睡\n",file);
    int age = 18;
    fprintf(file,"我今年%d岁",age);
    //关闭文件
    fclose(file);
    return 0;
}