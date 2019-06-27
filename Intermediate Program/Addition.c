//WAP in C to perform addition of all elements input in an integer array.

#include<stdio.h>
int main()
{
	int array[100];
	int i,n,sum=0;
	printf("Enter the length of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number: ");
		scanf("%d",&array[i]);
		sum=sum+array[i];
	}
	printf("Sum of all the elements = %d\n",sum);
	return 0;
}
