// ‘n’ numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many odd. 

#include<stdio.h>
int main()
{
	int array[200];
	int i,n,pos=0,neg=0,even=0,odd=0;
	printf("Enter the length of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number ");
		scanf("%d",&array[i]);
		if(array[i]>0)
		{
			pos++;
			if(array[i]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
		else if(array[i]<0)
		{
			neg++;
			if(array[i]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
	}
	printf("Number of positive numbers present in the array = %d\n",pos);
	printf("Number of negative numbers present in the array = %d\n",neg);
	printf("Number of even numbers present in the array = %d\n",even);
	printf("Number of odd numbers present in the array = %d\n",odd);
	return 0;
}
