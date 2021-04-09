#include<stdio.h>
int cgpa_calculator()
{
int i=0,semesters,credits[100],total_credits=0;
float gpa[100], cgpa,total=0;
printf("Enter the number of semesters for which you want calculate the CGPA:"); 
scanf("%d",&semesters);
printf("\n");
for(i=1;i<=semesters;i++)
{
printf("Enter the GPA of semester:");
scanf("%f",&gpa[i]);
printf("Enter the total credits in semester:");
scanf("%d",&credits[i]);
printf("\n");
}
for(i=1;i<=semesters;i++)
{
total=total+(gpa[i]*10*credits[i]);
total_credits=total_credits+credits[i];
}
cgpa=(total/total_credits);
printf("The cumulative GPA of all semesters is: %f",cgpa);
printf("\n");
}
