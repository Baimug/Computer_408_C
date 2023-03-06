#include <stdio.h>
#define Maxsize 50
typedef int ElemType;
typedef struct
{
    ElemType data[Maxsize];
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
    if(S.top==Maxsize-1)
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

int main() {
    SqStack S;
    InitStack(S);
    if(StackEmpty(S))
    {
        printf("Stack is empty\n");
    }
    Push(S,3);
    Push(S,4);
    Push(S,5);

    ElemType m;
    if(GetTop(S,m))
    {
        printf("Get top %d\n",m);
    }

    if(Pop(S,m))
    {
        printf("Pop element %d\n",m);
    }
    return 0;
}
