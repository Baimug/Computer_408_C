#include <stdio.h>
//输入N个数（N小于等于100），输出数字2的出现次数
int main() {
    int num;
    int a[100];
    int result=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        if(2==a[i])
        {
            result++;
        }

    }
    printf("%d",result);
    return 0;
}
