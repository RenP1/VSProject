#include <stdio.h>
//绝对路径
//#include "C:\Users\WH-HKB\Desktop\VSProjects\WH_250324_BasicCode\T_Day10\10_headers\project\src\02_my_header.h"

//相对路径 : 参照物 [当前代码所在的文件夹]
#include "02_my_header.h"
#include "includes/03_my_header.h"
#include "../04_my_header.h"
#include "../incs/05_my_header.h"
#include "../../06_my_header.c"

int main()
{
  func2();
  func3();
  func4();
  func5();
  func6();
  return 0;
}