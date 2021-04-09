#include<stdio.h>
int semester()
{

	int sum=0,total_subjects,credits=0;
	float GPA;
	int i,arr[100],arr1[100];
	printf("Enter the number of subjects in semester:");
	scanf("%d",&total_subjects);
	printf("\n");
	for(i=0;i<total_subjects;i++)
	{
	printf("Enter the gradepoint obtained:");
	scanf("%d",&arr[i]);
	printf("Enter the credits:");
	scanf("%d",&arr1[i]);
	printf("\n");
	}
	printf("\n\n");
	for(i=0;i<total_subjects;i++)
	{
	sum = sum+(arr[i]*arr1[i]);
	credits=credits+arr1[i];
	}
	GPA=(sum/credits);
	printf("Your GPA is : %f",GPA);
	printf("\n");
}
