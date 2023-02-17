#include <stdio.h>
//scanf用来读取标准输入，scanf把标准输入的内容，需要放在某个变量空间内，因此变量必须取地址
int main() {
    int i,ret;
    char c;
    float f;
//    scanf("%d",&i);
//    printf("i=%d\n",i);
//    fflush(stdin);//清空标准输入缓冲区
//    scanf("%c",&c);
//    printf("c=%c\n",c);
//
//    //scanf函数在读取整形数、浮点数、字符串会忽略'\n'（回车符）、空格等字符
//    // 忽略是指scanf函数执行时会先删除这些符号，然后再阻塞
//    //而读取字符数据时不会忽略任何字符
//    scanf("%f",&f);
//    printf("f=%f\n",f);

    ret=scanf("%d %c %f",&i,&c,&f);//ret是scanf匹配成功的个数
    printf("i=%c,c=%c,f=%f\n",i,c,f);
    return 0;
}
