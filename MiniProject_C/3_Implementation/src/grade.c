#include<stdio.h>
int grade_predictor()
//int main()
{
int marks,no_of_subjects,i=0,total_gradepoint,gradepoint[100];
float result;
printf("Enter the total number of subjects:");
scanf("%d",&no_of_subjects);
printf("\n");
for(i=1;i<=no_of_subjects;i++)
{
printf("Enter the marks in subject %d:",i);
scanf("%d",&marks);
if(marks>90)
{
printf("S Grade");
gradepoint[i]=10;
printf("\n");
}
if(marks>80&&marks<=90)
{
printf("A Grade");
gradepoint[i]=9;
printf("\n");
}
if(marks>70&& marks<=80)
{
printf("B Grade");
gradepoint[i]=8;
printf("\n");
}
if(marks>60&& marks<=70)
{
printf("C Grade");
gradepoint[i]=7;
printf("\n");
}
if(marks>50 && marks<=60)
{
printf("D Grade");
gradepoint[i]=6;
printf("\n");
}
if(marks<=50)
{
printf("E Grade");
gradepoint[i]=5;
printf("\n");
}
total_gradepoint=total_gradepoint+gradepoint[i];
printf("\n");
}
result=(total_gradepoint/no_of_subjects);
//printf("%f",result);
if(result>9.0)
{
printf("Your overall grade is S Grade");
printf("\n");
}
if(result<=9.0 && result>8.0)
{
printf("Your overall grade is A Grade");
printf("\n");
}
if(result<=8.0 && result>7.0)
{
printf("Your overall grade is B Grade");
printf("\n");
}
if(result<=7.0 && result>6.0)
{
printf("Your overall grade is C Grade");
printf("\n");
}
if(result<=6.0 && result>5.0)
{
printf("Your overall grade is D Grade");
printf("\n");
}
if(result<=5.0 && result>4.0)
{
printf("Your overall grade is E Grade");
printf("\n");
}
if(result<4.0)
{
printf("Fail");
printf("\n");
}
}









