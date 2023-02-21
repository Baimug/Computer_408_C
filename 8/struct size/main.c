#include <stdio.h>

struct student_1
{
    double score;//double是一种浮点类型，8个字节，浮点分为float和double，记住有这两种即可
    short age;//short是整形，2个字节
};

struct student_2
{
    double score;
    int height;//如果两个小存储之和是小于最大长度8，那么它们就结合在一起
    short age;
};

struct student_3
{
    int height;
    char sex;
    short age;
};
//结构体大小
int main() {
    struct student_1 s1;
    struct student_2 s2;
    struct student_3 s3;
    printf("s1_size%d\n",sizeof(s1));
    printf("s2_size%d\n",sizeof(s2));
    printf("s3_size%d\n",sizeof(s3));
    return 0;
}
