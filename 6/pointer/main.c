#include <stdio.h>
//指针
#define N 5
void change(char *d)
{
    *d='H';
    d[1]='E';//等价于*(d+1)='E'
    *(d+2)='E';
}
int main() {
//    int i=10;
//    int *i_pointer=&i;//定义了个指针变量i_pointer
//    printf("i=[%d]\n",i);//直接访问
//    printf("*i_pointer=[%d]\n",*i_pointer);//间接访问

    //指针的传递

    //指针的偏移，也就是对指针进行加加减减
//    int a[N]={1,2,3,4,5};
//    int *p;
//    p=a;
//    for(int i=0;i<N;i++)
//    {
//        printf("%d ",*(p+i));
//    }
//    printf("\n--------------\n");
//    p=&a[4];//指针变量指向了数组的最后一位
//    for(int i=0;i<N;i++)
//    {
//        printf("%d ",*(p-i));
//    }
    char c[10]={"hello"};
    change(c);
    puts(c);
    return 0;
}
