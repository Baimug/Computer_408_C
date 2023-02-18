#include <stdio.h>
//传递数组
//数组名传递刀子函数后，子函数的形参接收的到的是数组的起始地址，因此不能把数组的长度传给子函数
//void print(int a[])
//{
//    for(int i=0;i<sizeof(a)/sizeof(int);i++)
//    {
//        printf("%d\n",a[i]);
//    }
//}
void print(int a[],int length)
{
    for(int i=0;i<length;i++)
    {
        printf("%d\n",a[i]);
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    print(a,5);
    return 0;
}
