#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct student stu[3];
    printf("Enter the student data:\n");

    for (int i=0; i<3; i++)
    {
        printf("Student Roll No:");
        scanf("%d",stu[i].roll);
        printf("Name of the student:");
        scanf("%s",stu[i].name);
        printf("Marks obtaained:");
        scanf("%.2lf",stu[i].marks);
    }
    return 0;
}