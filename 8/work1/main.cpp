#include <stdio.h>
//输入一个学生的学号，姓名，性别，用结构体存储，通过scanf读取后，然后再通过printf打印输出
typedef struct student{
    int id;
    char name[20];
    char sex;
}stu;
int main() {
    stu s1;
    scanf("%d%s %c",&s1.id,s1.name,&s1.sex);
    printf("%d %s %c\n",s1.id,s1.name,s1.sex);
    return 0;
}
