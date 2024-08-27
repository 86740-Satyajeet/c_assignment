#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="Sunbeam";
    char ch;
    int l;
    l=strlen(s1);
    for (int i=0; i<=(l/2);  i++)
    {
        ch=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch;
    }
    printf("%s",s1);
    return 0;
}