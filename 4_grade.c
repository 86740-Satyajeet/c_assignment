#include<stdio.h>

int main()
{
    /*int s1,s2,s3,s4,s5, avg;
    printf("Enter Subjects Marks:");
    printf("\n S1=");
    scanf("%d",s1);
    printf("\n S2=");
    scanf("%d",s2);
    printf("\n S3=");
    scanf("%d",s3);
    printf("\n S4=");
    scanf("%d",s4);
    printf("\n S5=");
    scanf("%d",s5);
    avg=((s1+s2+s3+s4+s5)/5);
    printf("Average marks = %d", avg);
    */
   int sub[5];
   printf("Enter the marks of five subject:\n");
   for(int i=0 ; i<5; i++)
   {
    scanf("%d\n",&sub[i]);
    if (sub[i]>90)
    printf("Excelent");
    else if (sub[i]>80)
    printf("Grade A");
    else if (sub[i]>70)
    printf("Grade B");
    else if(sub[i]>60)
    printf("Grade C");
    else
    printf("Fail");
   }

   return 0;
}