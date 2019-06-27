//WAP in C to find the largest and smallest element in an integer array. 

#include<stdio.h>
int main()
{
	int array[100];
	int i,n,max,min;
	printf("Enter the length of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number ");
		scanf("%d",&array[i]);
	}
	max=array[0];
	min=array[0];
	for(i=0;i<n;i++)
	{
		if(max<array[i])
		{
			max=array[i];
		}
		else if(min>array[i])
		{
			min=array[i];
		}		
	}
	printf("Largest element = %d\n",max);
	printf("Smallest element = %d\n",min);
	return 0;
}
