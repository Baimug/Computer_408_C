#include <stdio.h>
//某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？
int main() {
    //100:i  5:j  2:k 1:m
    int result=0;
    for(int i=1;i<10;i++){
        for(int j=1;j<20;j++){
            for(int k=1;k<50;k++){
                for(int m=1;m<100;m++){
                    if(40==i+j+k+m && 100==i*10+j*5+k*2+m){
                        result++;
                    }
                }
            }
        }
    }
    printf("%d\n",result);
    return 0;
}
