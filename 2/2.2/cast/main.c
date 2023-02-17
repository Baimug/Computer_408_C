#include <stdio.h>
int main() {
    //强制类型转换
    int i=5;
    float f=i/2;//左右操作数都是整形，所以是整型运算
    float k=(float)i/2;
    printf("f=%f\n",f);
    printf("k=%f\n",k);

    //练习printf
    int age=29;
    printf("Hello,my name is %s,I'm %d years old.\n","Liuwei",age);

    int i2=10;
    float f2=96.3;
    printf("student id=%3d,sorce=%5.2f\n",i2,f2);//默认右对齐，加负号成左对齐
    printf("student id=%-3d,sorce=%5.2f\n",i2,f2);//默认右对齐，加负号成左对齐

    int i3=100;
    float f3=98.22;
    printf("student id=%3d,sorce=%5.2f\n",i3,f3);
    return 0;
}
