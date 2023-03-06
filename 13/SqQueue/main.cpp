#include <stdio.h>
#include <stdlib.h>
//循环队列
#define MaxSize 5
typedef int ElemType;
typedef struct
{
    ElemType data[MaxSize];//数组，存储MaxSize-1个元素
    int front,rear;//队列头  队列尾
}SqQueue;

//初始化
void InitQueue(SqQueue &Q)
{
    Q.front=Q.rear=0;//初始化循环队列，就是让头和尾指向0
}

//判断是否为空
bool IsEmpty(SqQueue Q)
{
    return Q.rear==Q.front;
}

//入队
bool EnQueue(SqQueue &Q,ElemType x)
{
    if((Q.rear+1)%MaxSize==Q.front)
    {
        return false;
    }
    Q.data[Q.rear]=x;
    Q.rear=(Q.rear+1)%MaxSize;//rear要加1，如果大于数组最大下标，回到开头
    return true;
}

//出队
bool DeQueue(SqQueue &Q,ElemType &x)
{
    if(Q.rear==Q.front)
    {
        return false;
    }
    x=Q.data[Q.front];
    Q.front=(Q.front+1)%MaxSize;
    return true;
}
int main() {
    SqQueue Q;
    ElemType x;
    InitQueue(Q);
    if(IsEmpty(Q))
    {
        printf("SqQueue is Empty\n");
    }
    else
    {
        printf("SqQueue is not Empty\n");
    }
    EnQueue(Q,3);
    EnQueue(Q,4);
    EnQueue(Q,5);
    EnQueue(Q,6);
    if(EnQueue(Q,7))
    {
        printf("Enqueue Success\n");
    }
    else
    {
        printf("Enqueue Failed\n");
    }
    if(DeQueue(Q,x))
    {
        printf("Dequeue Success %d\n",x);
    }
    return 0;
}
