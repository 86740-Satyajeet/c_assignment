#include<stdio.h>
int main()
{
    int a,b,c,d,max;
    printf("enter 4 numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    //max=(a>b&&a>c&&a>d)?a:((b>c&&b>d)?b):((c>d?c:d));
    if(a>b&&a>c&&a>d)
    printf("Max=%d",a);
    else if(b>c&&b>d)
    printf("Max=%d",b);
    else if (c>d)
    printf("max=%d",c);
    else
    printf("Max=%d",d);
    return 0;
}