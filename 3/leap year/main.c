#include<stdio.h>
//判断某个年份是不是闰年，如果是闰年，请输出“yes”，否则请输出“no”
int main()
{
  int year;
  scanf("%d",&year);
  if(year%4==0&&year%100!=0 || year%400==0)
    printf("yes");
  else
   	printf("no");
  return 0;
}
