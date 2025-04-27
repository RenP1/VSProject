#include <stdio.h>

int main()
{
    printf("请您输入一个整数 : \n");
    int num;
    scanf("%d",&num);
    printf("录入的整数是 : %d \n",num);

    //getchar();//在录入的缓冲区中获取一个字符 [吃一个字符]

    printf("请您输入一个字符 : \n");
    char ch;
    scanf("%c",&ch);    
    printf("录入的字符是 : %c \n",ch);
    return 0;
}