#include<stdio.h>
int main()
{
    int n, i=0, B[100], o[100];
    printf("Enter the value:");
    scanf("%d",&n);
   
    while (n>0)
    {
        B[i]=n%2;
        n=n/2;
        i++;
    }
    for (int j=i-1; j>=0;  j--)
    {
        printf("%d",B[j]);
    }
   /* while (n>0)
    {
        o[i]=n%8;
        n=n/8;
        i++;
    }
    for (int j=i-1; j>=0;  j--)
    {
        printf("Octal equivalent:%d",o[j]);
    }
*/
    return 0;
}
