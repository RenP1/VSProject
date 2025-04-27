#include <stdio.h>
//利用函数数组求和
int getSum(int arr[],int length){
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int sum = getSum(arr,5);
    printf("sum: %d\n",sum);
    return 0;
}