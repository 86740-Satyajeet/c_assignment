#include<stdio.h>
int main()
{
    char ch;
    printf("Enter input character:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("Character is uppercase");
    }else if (ch>='a' && ch<='z')
    {
        printf("Character is loweercase");
    }else if (ch>='0' && ch<='9')
    {
        printf("Character is digit");
    }else
    {
        printf("it is a other character");
    }

    return 0;
}