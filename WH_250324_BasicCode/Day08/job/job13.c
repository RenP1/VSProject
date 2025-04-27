#include <stdio.h>
#include <string.h>
/*
13. 计算一个字符串中每个字符出现的次数及对应的索引位置
	如: hello world
	结果: h---1次,e--1次,ll--3次,o--2次,w--1次,r---1次,d---1次
*/
int charCount(char *chs,int length){
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	int count6 = 0;
	int count7 = 0;
	for (int i = 0; i < length; i++)
	{
		switch (chs[i])
		{
		case 'h':
			count1++;
			break;
		case 'e':
			count2++;
			break;
		case 'l':
			count3++;
			break;
		case 'o':
			count4++;
			break;
		case 'w':
			count5++;
			break;
		case 'r':
			count6++;
			break;
		case 'd':
			count7++;
			break;
		}
	}
	printf("h---%d次,e--%d次,l--%d次,o--%d次,w--%d次,r---%d次,d---%d次",count1,count2,count3,count4,count5,count6,count7);
}
int main()
{
    char chs[]="hello world";
	int length =strlen(chs);
	charCount(chs,length);
    return 0;
}