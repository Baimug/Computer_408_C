#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//输入一个整型数，然后申请对应大小空间内存，然后读取一个字符串，字符串的输入长度小于最初输入的整型数大小，最后输出输入的字符串即可
int main() {
    int n;
    char c;
    int *p;
    scanf("%d",&n);
    scanf("%c",&c);
    p=(char*)malloc(n);
    gets(p);
    puts(p);
    free(p);//释放申请的空间
    return 0;
}
