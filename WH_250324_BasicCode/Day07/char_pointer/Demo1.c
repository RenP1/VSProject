#include <stdio.h>
#include <string.h>

int main()
{
    //字符指针
    char *chs="HelloWorld";
    size_t length =strlen(chs);
    //遍历字符串
    for (int i = 0; i < length; i++)
    {
        char ch = *(chs + i);
        printf("ch: %c\n",ch);
    }
    
    return 0;
}