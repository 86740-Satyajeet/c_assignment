#include <stdio.h>
void accept_data(char nameofstudents[3][3]);
int main()
{
    char nameofstudents [3][3];
    accept_data (nameofstudents);
    //print_data (nameofstudents);

    return 0;
}
void accept_data(char nameofstudents[3][3])
{
    printf("Enter the name of the students:");
    for (int i=0;  i<3; i++)
    {
        for (int j=0; j<3;  j++)
        {
            printf(" Name of the students[%d][%d]", i,j);
            scanf("%c",&nameofstudents[i][j]);
        }
        printf("\n");
    }

}