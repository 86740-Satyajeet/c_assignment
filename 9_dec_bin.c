#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    for(int i=31; i>=0; --i)
    {
        int res=n>>1;
        if ((res&1)>0)
        {
            printf("1");
        }else
        {
            printf("0");
        }
    }


    return 0;
}