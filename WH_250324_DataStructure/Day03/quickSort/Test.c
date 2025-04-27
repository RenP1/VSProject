#include <stdio.h>

// 交换两个元素的值
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 分区函数（基准为第一个元素）
int partition(int arr[], int start, int end) {
    int pivot = arr[start];  // 选择第一个元素作为基准
    int i = start;           // 跟踪小于基准的元素的右边界

    for (int j = start + 1; j <= end; j++) {
        // 当前元素小于基准时，将其交换到小元素区域的末尾
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    // 将基准元素放到正确的位置
    swap(&arr[i], &arr[start]);
    return i;  // 返回基准的最终位置
}

// 快速排序主函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // 确定基准位置
        quickSort(arr, low, pi - 1);         // 递归排序左半部分
        quickSort(arr, pi + 1, high);        // 递归排序右半部分
    }
}

// 测试代码
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, n - 1);
    
    printf("排序后的数组：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}