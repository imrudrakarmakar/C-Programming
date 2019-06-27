// ‘n’ numbers are entered from the keyboard into an array. The number to be searched is entered through the keyboard by the user. Write a program to find if the number to be searched is present in the array and if it is present, display the number of times it appears in the array. 

#include<stdio.h>
int main()
{
	int array[100];
	int i,n,ns,count=0,f=0;
	printf("Enter the length of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number ");
		scanf("%d",&array[i]);
	}
	printf("Enter the number to be searched ");
	scanf("%d",&ns);
	for(i=0;i<n;i++)
	{
		if(ns==array[i])
		{
			f=1;
			count++;
		}		
	}
	if(f==1)
	{
		printf("Number %d is present %d times in the array.",ns,count);
	}
	else
	{
		printf("Number %d is not present in the array.",ns);
	}
	return 0;
}
