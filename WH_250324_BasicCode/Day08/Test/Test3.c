#include <stdio.h>
#include <string.h>
//定义比较两个字符串长度的函数
char* strLong(char *str1,char *str2){
    return strlen(str1) > strlen(str2) ? str1 : str2;
}
int main()
{
    char *str = strLong("Hello","Python");
    printf("较长的字符串为: %s\n",str);
    return 0;
}