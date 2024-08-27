#include<stdio.h>
int main()
{
    int n, a=-1, b=1,c;
    printf("Enter the range:");
    scanf("%d \n",&n);
    for(int i=0;  i<n;  i++ )
    {
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
    }
    return 0;
}