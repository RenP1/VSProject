#include <stdio.h>
/*
15. 计算一个字符串中每个字符串出现的索引位置
	如: hello,结果:h---0,e---1,l---3,o---4
*/
int charIndex(char *chs,int length){
	for (int i = 0; i < length; i++)
	{
		switch (chs[i])
		{
		case 'h':
			printf("h索引 : %d\n",i);
			break;
		case 'e':
            printf("e索引 : %d\n",i);
			break;
		case 'l':
            printf("l索引 : %d\n",i);
			break;
		case 'o':
            printf("o索引 : %d\n",i);
			break;
		case 'w':
            printf("w索引 : %d\n",i);
			break;
		case 'r':
            printf("r索引 : %d\n",i);
			break;
		case 'd':
            printf("d索引 : %d\n",i);
			break;
		}
	}
}
int main()
{
    char chs[]="hello world";
	int length =strlen(chs);
	charIndex(chs,length);
    return 0;
}