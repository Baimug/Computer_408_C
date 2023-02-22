#include <stdio.h>
//初始化顺序表（顺序表中元素为整型），里边的元素是1,2,3，
// 然后通过scanf读取一个元素（假如插入的是6），插入到第2个位置，
// 打印输出顺序表，每个元素占3个空格，格式为1  6  2  3，
// 然后scanf读取一个整型数，是删除的位置（假如输入为1），然后输出顺序表  6  2  3，
// 假如输入的位置不合法，输出false字符串。提醒，Language一定要选为C++。
typedef struct
{
    int data[10];
    int len;
}SqList;
bool ListInsert(SqList &L,int i,int elemType){
    //判断i是否合法,存储空间是否足够
    if(i>=1 && i<=L.len-1 && L.len<10)
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
bool ListDelete(SqList &L,int i,int &del)
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
void PrintList(SqList L)
{
    for(int i=0;i<L.len;i++)
    {
        printf("%3d",L.data[i]);
    }
    printf("\n");
}
int main() {
    SqList L;
    int num,pos,tem;
    L.data[0]=1;
    L.data[1]=2;
    L.data[2]=3;
    L.len=3;

    scanf("%d",&num);
    ListInsert(L,2,num);
    PrintList(L);
    scanf("%d",&pos);
    bool ret=ListDelete(L,pos,tem);
    if(ret)
    {
        PrintList(L);
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
