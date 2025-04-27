#include <stdio.h>
#include <stdlib.h>

//节点结构体
typedef struct Node
{
    int element;
    struct Node *next;
}Node;

//单向链表结构体
typedef struct
{
    Node *frist;
    size_t length;
}LinkedList;

//初始化链表
void initLinkedList(LinkedList *list){
    list->frist = NULL;
    list->length = 0;
}
//销毁链表
void destoryList(LinkedList *list){
    if (list == NULL)
    {
        return;
    }

    if (list->length == 0)
    {
        list = NULL;
        return;
    }
    //准备一个指针代表要删除的节点
    Node *delNode = list->frist;

    if (delNode->next == NULL)
    {
        free(delNode); //删除第一个元素
        return;
    }
    while (delNode->next != NULL)
    {
        //能进来说明有下一个元素
        Node *next = delNode->next;
        free(delNode);
        delNode = next;
    }

    list = NULL;
}
//获取链表长度
size_t getLength(LinkedList *list){
    return list->length;
}

//获取上一个节点的地址
Node *getPrevNode(LinkedList *list,int index){
    Node *prevNode = list->frist;
    for (size_t i = 0; i < index-1; i++)
    {
        prevNode = prevNode->next;
    }
    return prevNode;
}
//在指定位置添加元素
void addIndexElement(LinkedList *list,int index,int element){
    if (list == NULL)
    {
        return;
    }
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->element = element;
    //索引为0 在头部位置添加元素
    if (index == 0)
    {
        //把头部位置的地址传给添加元素的next
        newNode->next = list->frist;
        list->frist = newNode;
    }else{
        newNode->next = getPrevNode(list,index)->next;
        getPrevNode(list,index)->next = newNode;
    }
    list->length++;
}
//在链表尾部添加元素
void addElement(LinkedList *list,int element){
    addIndexElement(list,getLength(list),element);
}
//在链表指定位置删除元素
void deleteIndexElement(LinkedList *list,int index){
    if (list == NULL)
    {
        return;
    }
    Node *delNode;
    if (index == 0)
    {
        //删除头节点位置
        delNode = list->frist;
        list->frist->next = list->frist;
    }
    Node *prevNode = getPrevNode(list,index);
    //上一个节点的next就是要删除索引的地址
    delNode = prevNode->next;
    //把要删除索引的next给上一个节点
    prevNode->next = delNode->next;
    //销毁空间
    free(delNode);
    list->length--;
}
//删除链表尾部元素
void deleteElement(LinkedList *list){
    deleteIndexElement(list,list->length-1);
}
//查询指定索引元素
int searchIndexElement(LinkedList *list,int index){
    if (list == NULL)
    {
        return -1;
    }
    Node *searchNode;
    searchNode = getPrevNode(list,index)->next;
    return searchNode->element;
}
//修改指定索引元素
void modifyIndexElement(LinkedList *list,int index,int element){
    if (list == NULL)
    {
        return;
    }
    Node *modifyNode = getPrevNode(list,index)->next;
    modifyNode->element = element;
}
//遍历链表数据
void printLinkedList(LinkedList *list){
    if (list == NULL || list->length == 0)
    {
        return;
    }
    Node *printNode = list->frist;
    while (printNode != NULL)
    {
        printf("%d\t",printNode->element);
        printNode = printNode->next;
    }
    printf("\n");
}
int main()
{
    LinkedList list;
    initLinkedList(&list);
    addElement(&list,1);
    addElement(&list,2);
    addElement(&list,3);
    addElement(&list,4);
    addElement(&list,5);
    addIndexElement(&list,2,6);
    deleteIndexElement(&list,2);
    printLinkedList(&list);
    return 0;
}