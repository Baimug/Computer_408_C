#include <stdio.h>
//判断是否是对称数
int main() {
    int num,num_temp;
    int temp=0;
    int result=0;
    scanf("%d",&num);
    num_temp=num;
    while(num_temp) {
        temp = num_temp % 10;
        result = result * 10 + temp;
        num_temp /= 10;
    }
    if(result==num){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}

