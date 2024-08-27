#include<stdio.h>
int my_fact(int num);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d\n",&n);
    int result=my_fact(n);
    printf("Result=%d \n",result);
    return 0;
}
int my_fact (int num)

{
    if (num==0)
    return 1;
    return num*my_fact(num-1);
}