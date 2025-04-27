#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *data;
    size_t length;
    size_t capacity;
}Stack;

/*
1.初始化栈
2.销毁栈
3.获取栈长度
4.扩容栈
5.进栈
6.出栈
7.遍历栈
*/

//1.初始化栈
void initStack(Stack *stack,size_t capacity){
    stack->data = (int *)malloc(capacity * sizeof(int));
    stack->length = 0;
    stack->capacity =capacity;
}
//2.销毁栈
void destoryStack(Stack *stack){
    free(stack->data);
    stack->length = 0;
    stack->capacity = 0;
    stack = NULL;
}
//3.获取栈长度
size_t getlength(Stack *stack){
    //非空判断
    if (stack == NULL)
    {
        return;
    }
    return stack->length;
}
//4.扩容栈
void dilatationStack(Stack *stack){
    //非空判断
    if (stack == NULL)
    {
        return;
    }
    stack->data = (int *)realloc(stack->data,stack->capacity * 2);

    stack->capacity = stack->capacity * 2;

    //找到最后进栈的索引
    int index = stack->capacity - stack->length;

    //移动元素
    for (size_t i = 0; i < stack->length; i++)
    {
        stack->data[index + stack->capacity] = stack->data[i];
        index++;
    }
    
}
//5.进栈
void push(Stack *stack,int element){
    //非空判断
    if (stack == NULL)
    {
        return;
    }
    stack->length++;
    int index =stack->capacity - stack->length;
    stack->data[index] = element;
}
//6.出栈
void pop(Stack *stack){
    //非空判断
    if (stack == NULL)
    {
        return;
    }
    stack->length--;
}
//遍历栈
void printStack(Stack *stack){
    //非空判断
    if (stack == NULL)
    {
        return;
    }
    int index = stack->capacity - stack->length;
    for (size_t i = index; i < stack->length; i++)
    {
        printf("%d\t",stack->data[i]);
    }
    printf("\n");
}
int main()
{
    Stack stack;
    initStack(&stack,5);
    push(&stack,1);
    return 0;
}