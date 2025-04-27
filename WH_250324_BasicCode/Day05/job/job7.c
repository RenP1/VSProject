#include <stdio.h>

// 7.利用函数实现二维数组的数据和及最大值(3行4列的二维数组,double类型的)
double arrSum(double arr[3][4]) {
  double sum = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      sum += arr[i][j];
    }
  }
  return sum;
}

double arrMax(double arr[3][4]) {
  double max = arr[0][0];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (max < arr[i][j]) {
        max = arr[i][j];
      }
    }
  }
  return max;
}
double arrMin(double arr[3][4]) {
    double min = arr[0][0];
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 4; j++) {
        if (min > arr[i][j]) {
          min = arr[i][j];
        }
      }
    }
    return min;
  }
int main() { 

    return 0; 
}