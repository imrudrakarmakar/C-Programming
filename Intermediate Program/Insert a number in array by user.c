//Write a Program to insert an element in the specified location of an array. The elements of the array and the position along with the element which needs to be inserted will be user input

#include<stdio.h>
int main()
{
	int array[100];
	int i,n,ni,pos,c=-1;
	printf("Enter the length of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number ");
		scanf("%d",&array[i]);
		c++;
	}
	printf("Enter the number to be inserted ");
	scanf("%d",&ni);
	printf("Enter the position where the number to be inserted(0 to %d): ",c);
	scanf("%d",&pos);
	for(i=n-1;i>=0;i--)
	{
		if(i>pos)
		{
			array[i+1]=array[i];
		}
		else if(i==pos)
		{
			array[i+1]=array[i];
			array[i]=ni;
			break;
		}
	}
	printf("Output after inserting the element :\n");
	for(i=0;i<=n;i++)
	{
		printf("%d,",array[i]);
	}			
	return 0;
}
