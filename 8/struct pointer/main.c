#include <stdio.h>
//机构体指针的练习
//stu 等价于 struct student
//pstu 等价于struct student*
typedef struct student
{
    int num;
    char name[20];
    char sex;
}stu,*pstu;
int main() {
    stu s={1001,"LF",'M'};
    stu sarr[3]={101,"LF",'M',102,"LW",'F',101,"L?",'?'};
    pstu p;//定义一个结构体指针变量
    p=&s;
    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);//方式一访问
    printf("%d %s %c\n",p->num,p->name,p->sex);//方式二访问✔✔✔
    p=sarr;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    p=p+1;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    return 0;
}
