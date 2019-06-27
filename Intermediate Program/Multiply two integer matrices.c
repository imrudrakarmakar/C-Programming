// Write a program to multiply two integer matrices. 

#include<stdio.h>
int main()
{
	int A[100][100],B[100][100],multi[100][100];
	int i,j,k,r1,r2,c1,c2;
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
	printf("First Matrix :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
				printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("Second Matrix :\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
				printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				multi[i][j]=0;		
				for(k=0;k<r2;k++)
				{				
					multi[i][j]=multi[i][j]+(A[i][k]*B[k][j]);
				}
			}
		}
		printf("After multiplication :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",multi[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrix multiplication not possible.");
	}	
	return 0;
}
