#include <stdio.h>

//输出小写的a-z以及大写的Z—A。
int main()
{
    for (char i = 97; i <= 122; i++)
    {
        printf("%c\n",i);
    }
    for (char i = 65; i <= 90; i++)
    {
        printf("%c\n",i);
    }
    return 0;
}