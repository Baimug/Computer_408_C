#include <stdio.h>
//C++引用的讲解
//在子函数中修改主函数普通变量的值

//当你在子函数中要修改主函数中变量的值，就用引用，不需要修改，就不用
void modify_num(int &b)//形参中写&，要称为引用
{
    b=b+1;
}

//子函数内修改主函数一级指针变量
void modify_pointer(int *&p,int *q)//形参中写&，要称为引用
{
    p=q;
}
int main() {
    int a=10;
    modify_num(a);
    printf("after modify_num a=%d\n",a);

    int *p=NULL;
    int i=10;
    int *q=&i;
    modify_pointer(p,q);
    printf("after modify_pointer *p=%d\n",*p);//
    return 0;
}
