#include <stdio.h>
#include <stdlib.h>
//通过链表实现队列
typedef int ElemType;
typedef struct LinkNode
{
    ElemType data;
    struct LinkNode *next;
}LinkNode;

typedef struct
{
    LinkNode *front,*rear;//链表头 链表尾 或者队头 队尾

}LinkQueue;//先进先出

//初始化，使用的是带头结点
void InitLQ(LinkQueue &LQ)
{
    LQ.front=LQ.rear=(LinkNode*)malloc(sizeof(LinkNode));//头和尾指向同一节点
    LQ.front->next=NULL;
}

bool IsEmpty(LinkQueue LQ)
{
    if(LQ.front==LQ.rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool EnLQueue(LinkQueue &LQ,ElemType x)
{
    LinkNode *pnew=(LinkNode*) malloc(sizeof(LinkNode));
    pnew->data=x;
    pnew->next=NULL;
    LQ.rear->next=pnew;//尾指针的next指向pnew,从尾部入队
    LQ.rear=pnew;//rear要指向新的尾部
    return true;
}
bool DeLQueue(LinkQueue &LQ,ElemType &x)
{
    if(LQ.rear==LQ.front)
    {
        return false;
    }
    LinkNode *q=LQ.front->next;//拿到第一个节点
    LQ.front->next=q->next;
    x=q->data;
    if(LQ.rear==q)//链表只剩余一个节点时，被删除后，要改变rear
    {
        LQ.rear=LQ.front;
    }
    free(q);
    return true;
}
int main() {
    LinkQueue LQ;
    ElemType x;
    InitLQ(LQ);
    if(IsEmpty((LQ)))
    {
        printf("LinkQueue is Empty\n");
    }
    EnLQueue(LQ,3);
    EnLQueue(LQ,4);
    EnLQueue(LQ,5);
    EnLQueue(LQ,6);
    EnLQueue(LQ,7);
    if(DeLQueue(LQ,x))
    {
        printf("DeQueue success element=%d\n",x);
    }
    else
    {
        printf("DeQueue failed \n");
    }
    return 0;
}
