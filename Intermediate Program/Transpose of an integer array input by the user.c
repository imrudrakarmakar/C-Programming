//Write a program in C to find the transpose of an integer array input by the user. 

#include<stdio.h>
int main()
{
	int A[100][100],trans[100][100];
	int i,j,r,c;
	printf("Enter the row of matrix ");
	scanf("%d",&r);
	printf("Enter the column of matrix ");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the number ");
			scanf("%d",&A[i][j]);
		}
	}
	printf("Original Matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		 	printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{		
			trans[i][j]=A[j][i];
	
		}
	}
	printf("Transpose Matrix :\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
		 	printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
