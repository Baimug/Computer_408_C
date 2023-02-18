#include <stdio.h>
#include<string.h>
//读取一个字符串，字符串可能含有空格，将字符串逆转，原来的字符串与逆转后字符串相同，输出0，原字符串小于逆转后字符串输出-1，大于逆转后字符串输出1。
// 例如输入 hello，逆转后的字符串为 olleh，因为hello 小于 olleh，所以输出-1
int main() {
    char c[100];
    char temp;
    gets(c);
    int i=0;
    char c2[100];
    while(c[i])
    {
        for(int j=i;j>0;j--)
        {
            c2[j]=c2[j-1];
        }
        c2[0]=c[i];
        i++;
    }
    int result = strcmp(c, c2);

    if (result < 0)
    {
        printf("%d\n",-1);
    }
    else if (result > 0)
    {
        printf("%d\n", 1);
    }
    else {
        printf("%d\n", 0);
    }
    return 0;
}
