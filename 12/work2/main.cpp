#include <stdio.h>
#include<stdlib.h>
//头插法新建链表
typedef int ElemType;
typedef struct LNode
{
    ElemType data;//数据域
    struct LNode *next;
}LNode,*LinkList;

//LNode*是结构体指针，和LinkList完全等价

void list_tail_insert(LNode* &L)
{
    L=(LinkList)malloc(sizeof(LNode));//申请头结点指针，头指针指向头结点
    L->next=NULL;
    ElemType x;
    scanf("%d",&x);
    LNode *s,*r=L;//s用来指向申请的新节点,r始终指向链表尾部
    while(x!=9999)
    {
        s=(LinkList)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    s->next=NULL;//尾节点NEXT指向NULL
}

void PrintList(LinkList L)
{
    L = L->next;
    while (L != NULL)
    {
        printf("%3d", L->data);//打印当前结点数据
        L = L->next;//指向下一个结点
    }
    printf("\n");
}
//通过位置查找
LinkList  GetElem(LinkList L,int SearchPos)
{
    int i=0;
    if(SearchPos<0)
    {
        return NULL;
    }
    while(L&&i<SearchPos)
    {
        L=L->next;
        i++;
    }
    return L;
}
//插入
bool ListFrontInsert(LinkList &L,int i,ElemType InsertVal)
{
    LinkList L_pre= GetElem(L,i-1);
    if(NULL==L_pre)
    {
        return false;
    }
    LinkList L_new=(LinkList)malloc(sizeof(LNode));
    L_new->data=InsertVal;
    L_new->next=L_pre->next;
    L_pre->next=L_new;
    return true;
}
bool ListDelete(LinkList L,int i)
{
    LinkList p=GetElem(L,i-1);//拿到要删除节点的前一节点
    if(NULL==p)
    {
        return false;
    }
    LinkList q=p->next;//拿到要删除的节点
    p->next=q->next;//断链
    free(q);//释放被删除节点的空间
    return true;
}
int main() {
    LinkList L2,search;//链表头指针，是结构体指针类型
    list_tail_insert(L2);
    //按位置查找
    search=GetElem(L2,2);
    if(search!=NULL)
    {
        printf("%d\n",search->data);
    }
    ListFrontInsert(L2,2,99);
    PrintList(L2);
    ListDelete(L2,4);
    PrintList(L2);
    return 0;
}
