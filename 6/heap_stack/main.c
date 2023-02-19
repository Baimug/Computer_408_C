#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *print_stack()
{
    char c[100]="I am printf_stack func";
    char *p;
    p=c;
    printf("stack_i:");
    puts(p);
    return p;
}
char *print_malloc()
{
    char *p=(char*)malloc(100);//堆空间在整个进程一直有效，不因为函数结束而消亡
    strcpy(p,"I am printf_malloc func");
    printf("malloc_i:");
    puts(p);
    return p;
}

int main() {
    char *p;
    p=print_stack();
    printf("stack_o:");
    puts(p);

    p=print_malloc();
    printf("malloc_o:");
    puts(p);
    free(p);//只有free的时候,堆空间才释放
    return 0;
}
