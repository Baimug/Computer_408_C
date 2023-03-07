#include <stdio.h>
#include <stdlib.h>
//新建一个栈，读取标准输入3个整数3 4 5，入栈3 4 5，依次出栈，打印 5 4 3，
// 新建循环队列（Maxsize为5），读取标准输入3 4 5 6 7，入队7时，队满，打印false，然后依次出队，输出 3 4 5 6
#define MaxSize 5
typedef int ElemType;
typedef struct
{
    ElemType data[MaxSize];
    int top;//始终指向栈顶的一个变量
}SqStack;

//初始化栈
void InitStack(SqStack &S)
{
    S.top=-1;//初始化栈，就是S.top=-1，让栈为空
}
bool StackEmpty(SqStack S)
{
    if(-1==S.top)
    {
        return true;
    }
    else
    {
        return false;
    }

}
//压值
bool Push(SqStack &S,ElemType x)
{
    if(S.top==MaxSize-1)
    {
        return false;
    }
    S.data[++S.top]=x;
    return true;
}

//获取栈顶元素
bool GetTop(SqStack S,ElemType &m)
{
    if(StackEmpty(S))
    {
        return false;
    }
    m=S.data[S.top];
    return true;
}

//弹栈
bool Pop(SqStack &S,ElemType &m)
{
    if(StackEmpty(S))
    {
        return false;
    }
    m=S.data[S.top--];//出栈  后减减先m=S.data[S.top];S.top=S.top-1;
    return true;
}

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
        printf("false\n");
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
    SqStack S;
    InitStack((S));
    ElemType element;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&element);
        Push(S,element);
    }

    while(Pop(S,element))
    {
        printf("%2d",element);
    }
    printf("\n");

    SqQueue Q;
    InitQueue(Q);
    for(int i=0;i<5;i++)
    {
        scanf("%d",&element);
        EnQueue(Q,element);
    }
    while(DeQueue(Q,element))
    {
        printf("%2d",element);
    }

    return 0;
}
