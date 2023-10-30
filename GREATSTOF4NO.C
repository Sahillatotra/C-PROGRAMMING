#include<stdio.h>
int main()
{
    int a,b,c,d,big;
    printf("enter four numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    big=a>b?(a>d?a:d)(b>d?b:d)(c>d?c:d)
    printf("the greatest no id=%d",big);
} 
