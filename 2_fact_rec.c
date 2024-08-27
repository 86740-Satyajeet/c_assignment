#include<stdio.h>
int my_fact(int num);
int main() 
{
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);

  /*
    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        int result=my_fact(n);
        printf("Result = %d",result);
    }
    */
   int result= my_fact(n);
   printf("Result=%d",result);
   return 0;
}
int my_fact(int num)
{
    if (num==0)
    return 1;
    return num*my_fact(num-1);
}
