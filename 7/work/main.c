#include <stdio.h>
//假如有n个台阶，一次只能上1个台阶或2个台阶，请问走到第n个台阶有几种走法？
// 为便于读者理解题意，这里举例说明如下：假如有3个台阶，那么总计就有3种走法：
// 第一种为每次上1个台阶，上3次；
// 第二种为先上2个台阶，再上1个台阶；
// 第三种为先上1个台阶，再上2个台阶。输入为n，输出为走到第n个台阶有几种走法
int step(int n)
{
    if(1==n||2==n)
    {
        return n;
    }
    else
    {
        return step(n-1)+step(n-2);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n",step(n));
    return 0;
}
