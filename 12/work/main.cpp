#include <stdio.h>
#include<stdlib.h>
//设线性表L=（a1，a2，a3；…，an-1，an，）采用带头结点的单链表保存，链表中的结点定义如下：
//typedef struct node
// {
//      int data;
//      struct node* next;
//  } NODE;
//请设计一个空间复杂度为O（1）且时间上尽可能高效的算法，重新排列L中的各结点，得到线性表L'=（a1，an，a2，an-1，an，ax-1，ax-2，…）。要求：
//（1）给出算法的基本设计思想。
//（2）根据设计思想，采用C或C++语言描述算法，关键之处给出注释。（3）说明你所设计的算法的时间复杂度
typedef struct node
{
    int data;
    struct node* next;
} NODE,*Link;
void TailInsert(Link &L)
{
    int a;
    L=(Link)malloc(sizeof(NODE));
    L->next=NULL;
    Link p,q=L;
    scanf("%d",&a);
    while(a!=9999)
    {
        p=(Link)malloc(sizeof(NODE));
        p->data=a;
        q->next=p;
        q=p;
        scanf("%d",&a);
    }
    q->next=NULL;
}
void PrintL(Link L)
{
    L=L->next;
    while(L!=NULL)
    {
        printf("%3d",L->data);
        L=L->next;
    }
    printf("\n");
}
//找到中间节点，将L分为L1,L2
void MidModi(Link L,Link &L1,Link &L2)
{
    L1=L;
    Link p=L1,q=L->next;
    while(q!=NULL)
    {
        p=p->next;
        q=q->next;
        if(q!=NULL)
        {
            q=q->next;
        }

    }
    if(p->next!=NULL)
    {
        L2->next=p->next;
    }
    p->next=NULL;
}
void Inversion(Link &L2)
{
    Link a,b,c;
    a=L2->next;
    b=a->next;
    if(b!=NULL)
    {
        a->next=NULL;
        c=b->next;
        while(c!=NULL)
        {
            b->next=a;
            a=b;
            b=c;
            c=c->next;
        }
        b->next=a;
        L2->next=b;
    }
}

void MakeUp(Link &L,Link L1,Link L2)
{
    Link p,q,r=L;
    L1=L1->next;
    L2=L2->next;
    while(L1!=NULL&&L2!=NULL)
    {
        p=L1->next;
        q=L2->next;
        r->next=L1;
        r=r->next;
        r->next=L2;
        r=r->next;
        L1=p;
        L2=q;
    }
    if(L1!=NULL)
    {
        r->next=L1;
    }
    else if(L2!=NULL)
    {
        r->next=L2;
    }
}
int main() {
    Link L,L1,L2;
    TailInsert(L);
    PrintL(L);

    //找中间节点，将L分为L1,L2
    L1=(Link)malloc(sizeof(NODE));
    L2=(Link)malloc(sizeof(NODE));
    MidModi(L,L1,L2);
    PrintL(L1);
    PrintL(L2);

    //倒置L2
    Inversion(L2);
    PrintL(L2);
    //将L1、L2交叉组成新的L
    MakeUp(L,L1,L2);
    PrintL(L);
    return 0;
}
