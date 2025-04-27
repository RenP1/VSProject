#include <stdio.h>
#include <stdlib.h>

//动态数组类
typedef struct
{
    int *data;//动态数组里的内容
    size_t length;//动态数组的真实数据数量[长度]
    size_t capacity;//动态数组的容量
}DinamicArray;

/*
    1.初始化动态数组
    2.销毁动态数组
    3.动态数组扩容
    4.动态数组依次添加元素
    5.动态数组指定索引添加元素
    6.指定索引删除动态数组元素
    7.删除动态数组末尾元素
    8.遍历动态数组
*/

//1.初始化动态数组
void initDinamicArray(DinamicArray *array,size_t initCapacity){
    //非空验证
    if (array->data == NULL)
    {
        return;
    }
    //开辟动态数组内容空间
    array->data = (int *)malloc(initCapacity * sizeof(int));
    array->length = 0;
    array->capacity = initCapacity;
}

//2.销毁动态数组
void destructionDinamicArray(DinamicArray *array){
    free(array);
    //长度为0
    array->length = 0;
    //容量为0
    array->capacity = 0;
    //数组内容为NULL
    array->data = NULL;
}

//3.动态数组扩容
void dilatationDinamicArray(DinamicArray *array,size_t newCapacitty){
    array->data = realloc(array->data,newCapacitty * sizeof(int));
    array->capacity = newCapacitty;
}

//4.动态数组指定索引添加元素
void addIndexElement(DinamicArray *array,int index,int element){
     //非空验证
     if (array->data == NULL)
     {
         return;
     }
     //判断数组是不是满了
     if (array->length == array->capacity)
     {
        //满了扩容
        size_t newCapacity = (array->capacity)+(array->capacity >> 1);
        dilatationDinamicArray(array,newCapacity);
     }
     //没满添加元素
     for (size_t i = array->length; i > index; i--)
     {
        array->data[i] =array->data[i-1];
     }
     array->data[index] = element;
     //添加完以后,长度+1
     array->length++;
}
//5.动态数组依次添加元素
void addElement(DinamicArray *array,int element){
    addIndexElement(array,array->length,element);
}

//6.指定索引删除动态数组元素
void deleteIndexElement(DinamicArray *array,int index){
    //非空验证
    if (array->data == NULL)
    {
        return;
    }
    for (size_t i = index; i < array->length; i++)
    {
       array->data[i] = array->data[i+1];
    }
    array->length--;
}

//7.删除动态数组末尾元素
void deleteElement(DinamicArray *array){
    deleteIndexElement(array,array->length-1);
}

//8.遍历数组
void printfArray(DinamicArray *array){
     //非空验证
     if (array->data == NULL)
     {
         return;
     }
     printf("动态数组中的元素有: ");
    for (size_t i = 0; i < array->length; i++)
    {
        printf("%d ",array->data[i]);
    }
    printf("\n");
}
int main()
{
    //测试
    DinamicArray array;
    initDinamicArray(&array,5);
    addElement(&array,1);
    addElement(&array,2);
    addElement(&array,4);
    addElement(&array,5);
    addIndexElement(&array,2,3);
    //deleteElement(&array);
    deleteIndexElement(&array,1);
    printfArray(&array);
    return 0;
}