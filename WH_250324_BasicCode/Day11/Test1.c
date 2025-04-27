#include <stdio.h>

int main()
{
    //创建流
    FILE *input = fopen("aaa.txt","r");
    FILE *ouput = fopen("bbb.txt","w");

    //循环读取
    char chs[1024];
    while (fgets(chs,1024,input) != NULL)
    {
        fputs(chs,ouput);
    }
    
    //关闭流
    fclose(input);
    fclose(ouput);
    return 0;
}