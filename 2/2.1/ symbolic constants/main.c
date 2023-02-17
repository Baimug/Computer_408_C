#include <stdio.h>
//符号常量
#define PI 3+2
int main() {
    //整形
    int i=PI*2;
    printf("i=%d\n",i);
    printf("i size=%d\n",sizeof(i));

    //浮点
    float f=3e-3;
    printf("f=%f\n",f);

    //字符
    char c='A';
    printf("c=%c\n",c+32);//以字符输出
    printf("c=%d\n",c);//以数值输出
    return 0;
}
