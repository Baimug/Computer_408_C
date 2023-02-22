#include <stdio.h>
//顺序表的初始化和插入实战
#define Maxsize 50
typedef int ElemType;//让顺序表存储其他类型元素时，可以快速完成代码修改
typedef struct{
    ElemType data[Maxsize];
    int len;//顺序表长度
}SqList;
//顺序表的插入，因为元素会改变，所以这里要用引用
bool ListInsert(SqList &L,int i,ElemType elemType){
    //判断i是否合法,存储空间是否足够
    if(i>=1 && i<=L.len-1 && L.len<Maxsize)
    {
        for(int j=L.len;j>=i;j--)
        {
            L.data[j]=L.data[j-1];
        }
        L.data[i-1]=elemType;//放入插入的元素
        L.len++;//顺序表长度要加1
        return true;//插入成功返回true
    }
    else
    {
        return false;
    }


}

//删除顺序表中的元素,i是要删除元素的位置，del是为了获取被删除的元素的值
bool ListDelete(SqList &L,int i,ElemType &del)
{
    //判断i是否合法
    if(i>=1&&i<=L.len)
    {
        del=L.data[i-1];
        for(int j=i;j<L.len;j++)
        {
            L.data[j-1]=L.data[j];
        }
        L.len--;
        return true;
    }
    else
    {
        return false;
    }
}
//查找某个元素的位置，没找到就返回0
int LocateElem(SqList L,ElemType elemType)
{
    for(int i=0;i<L.len;i++)
    {
        if(elemType==L.data[i])
        {
            return i+1;//i是数组下标，表位置要+1
        }
    }
    return 0;//没找到
}

void PrintList(SqList L)
{
    for(int i=0;i<L.len;i++)
    {
        printf("%3d",L.data[i]);
    }
    printf("\n");
}
int main() {
    SqList L;//定义一个顺序表，变量L
    bool ret;
    L.data[0]=1;//放置元素
    L.data[1]=2;
    L.data[2]=3;
    L.len=3;
    printf("sqlist:\n");
    PrintList(L);
    ret=ListInsert(L,1,60);
    if(ret)
    {
        printf("insert sqlist success\n");
        PrintList(L);
    }
    else
    {
        printf("insert sqlist failed\n");
    }
    ElemType del;
    ret=ListDelete(L,2,del);
    if(ret)
    {
        printf("delete element=%d success\n",del);
        PrintList(L);
    }
    else
    {
        printf("delete sqlist failed\n");
    }
    int pos;
    pos=LocateElem(L,6);
    if(pos)
    {
        printf("find this element\n");
        printf("element pos=%d\n",pos);
    }
    else
    {
        printf("not find this element\n");
    }
    return 0;
}
