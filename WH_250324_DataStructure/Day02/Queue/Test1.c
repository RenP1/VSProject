#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *data;
    size_t length;
    size_t capacity;
}Queue;

/*
1.初始化队列
2.销毁队列
3.获取长度
4.扩容队列
5.进队列
6.出队列
7.遍历队列
*/

//1.初始化队列
void initQueue(Queue *queue,int capacity){
    //给队列开辟空间
    queue->data = (int *)malloc(capacity * sizeof(int));
    queue->length = 0;
    queue->capacity = capacity;
}
//2.销毁队列
void destroyQueue(Queue *queue){
    //非空判断
    if (queue->data == NULL)
    {
        return;
    }
    free(queue->data);
    queue->length = 0;
    queue->capacity = 0;
    queue = NULL;
}
//3.获取长度
size_t getLength(Queue *queue){
    return queue->length;
}
//4.扩容队列
void dilatationQueue(Queue *queue){
    //扩容两倍
    queue->data = realloc(queue->data,queue->capacity * 2 * sizeof(int));
    queue->capacity = queue->capacity * 2;
}
//5.进队列
void entryQueue(Queue *queue,int element){
    //非空验证
    if (queue == NULL)
    {
        return;
    }
    if (queue->capacity == queue->length)
    {
        dilatationQueue(queue);
    }
    queue->data[queue->length] = element;
    queue->length++;
}
//6.出队列
void deleteQueue(Queue *queue){
    //非空验证
    if (queue == NULL)
    {
        return;
    }
    //正遍历,后一个数覆盖前一个数
    for (size_t i = 0; i < queue->length-1; i++)
    {
        queue->data[i] = queue->data[i+1];
    }
    //出完以后length--
    queue->length--;
}
//7.遍历队列
void printQueue(Queue *queue){
    //非空验证
    if (queue == NULL || queue->length == 0)
    {
        return;
    }
    for (size_t i = 0; i < queue->length; i++)
    {
        printf("%d\t",queue->data[i]);
    }
    printf("\n");
}
int main()
{
    Queue queue;
    //初始化队列
    initQueue(&queue,5);
    //进队列
    entryQueue(&queue,1);
    entryQueue(&queue,2);
    entryQueue(&queue,3);
    entryQueue(&queue,4);
    entryQueue(&queue,5);
    entryQueue(&queue,6);
    //出队列
    deleteQueue(&queue);
    deleteQueue(&queue);
    //遍历队列
    printQueue(&queue);
    return 0;
}