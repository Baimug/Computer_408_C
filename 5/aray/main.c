#include <stdio.h>

int main() {
    int a[5]={1,2,3,4,5};
    int j=20;
    int i=10;
    a[5]=6;//访问越界,会改变其他位置的变量的值，特别注意在for循环中
    a[6]=7;
    printf("i=%d,j=%d\n",i,j);
    return 0;
}
