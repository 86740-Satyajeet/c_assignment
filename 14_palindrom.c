#include<stdio.h>
#include<string.h>

int main()
{
    char one[20],two[20];
    int cmp;
    printf("Enter a string:  ");
    scanf("%s",&one);
    strcpy(two,one);
    strrev(one);
    cmp=strcmp(one,two);
    if(cmp==0)
    {
        printf("Entered string is Palindrom:  ");
    }else
    {
        printf("Entered string is not a Paindrom: ");
    }
    return 0;
}