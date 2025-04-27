#include <stdio.h>
/*
12. 把一个字符串所有内容反转
	如: hello world 结果: dlrow olleh
*/
void reversalString(char *ch) {
    int length = strlen(ch);
    char temp;
    for (int i = 0, j = length - 1; i < j; i++, j--) {
      temp = ch[i];
      ch[i] = ch[j];
      ch[j] = temp;
    }
  }
  int main() { 
      char ch[] ="hello world";
      reversalString(ch);
      printf("%s",ch);
      return 0; 
  }