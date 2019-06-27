//Write a program to add two integers matrices input by the user.

#include<stdio.h>
int main()
{
	int A[100][100],B[100][100],sum[100][100];
	int i,j,r1,r2,c1,c2;
	printf("Enter the row of 1st matrix ");
	scanf("%d",&r1);
	printf("Enter the column of 1st matrix ");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter the number ");
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the row of 2nd matrix ");
	scanf("%d",&r2);
	printf("Enter the column of 2nd matrix ");
	scanf("%d",&c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter the number ");
			scanf("%d",&B[i][j]);
		}
	}
	if(r1==r2 && c1==c2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{		
				sum[i][j]=A[i][j]+B[i][j];
			}
		}
		printf("After addition :\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",sum[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrix addition not possible.");
	}	
	return 0;
}
