//Write a Program to delete a particular element from the specified location from an array. The elements of the array and the position which needs to be deleted will be user input. 

#include<stdio.h>
int main()
{
	int array[100];
	int i,n,nd,pos,c=-1;
	printf("Enter the length of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number ");
		scanf("%d",&array[i]);
		c++;
	}
	printf("Enter the number to be deleted ");
	scanf("%d",&nd);
	printf("Enter the position of the number to be deleted(0 to %d): ",c);
	scanf("%d",&pos);
	if(array[pos]==nd)
	{
		for(i=pos;i<n-1;i++)
		{
			array[i]=array[i+1];
		}
		printf("Output after deleting the element :\n");
		for(i=0;i<n-1;i++)
		{
			printf("%d,",array[i]);
		}		
	}
	else
	{
		printf("Number and position did not match.");
	}	
	return 0;
}
