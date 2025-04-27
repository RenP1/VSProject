#include <stdio.h>
#include <string.h>

//19.利用函数实现一个字符串反转输出
void stringInversion(char *ch,int length){
    for (int i = 0,j = length-1; i>j ; i++,j--)
    {
        char temp;
        temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
    }
    
    
}
int main()
{
    char msg[6]={'H','e','l','l','o','\0'};
    int length = strlen(msg);
    printf("msg: %s",stringInversion(msg,length));
    return 0;
}