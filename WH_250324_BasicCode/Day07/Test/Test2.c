#include <stdio.h>
char *get_string(int *arr, int len)
{
  static char str[100];
  sprintf(str, "%d%d%d", arr[0], arr[1], arr[2]);
  return str;
}
int main()
{
  int nums[] = {10, 20, 30};
  int len = 3;
  char *str = get_string(nums, len);
  printf("%s\n", str);

  return 0;
}