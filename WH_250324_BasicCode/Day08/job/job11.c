#include <stdio.h>
#include <string.h>
/*
11. 把一个字符串的内容 分别反转输出
	如: hello world 结果: olleh dlorw
*/
void revergeStr(char *chs){
    int length = strlen(chs);
    char temp;
    for (int i = 0,j = length-1; i < j; i++,j--)
    {
        temp = chs[i];
        chs[i] = chs[j];
        chs[j] = temp;
    }
}
void revergeWord(char *chs){
    
}
int main()
{
    char ch[] ="hello world";
    revergeStr(ch);
    return 0;
}