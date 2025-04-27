#include <stdio.h>

void bobbleSort(int *arr,int length){
    for (int j = 0; j < length-1; j++)
    {
        //一轮冒泡 最大的一定到最后面
    for (int i = 0; i < length-1-j; i++)
    {
        if (arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    }
}
int main()
{
    int arr[] = {5,2,4,3,1};
    bobbleSort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}