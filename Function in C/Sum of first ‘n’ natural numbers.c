//Write a recursive function to calculate sum of first ‘n’ natural numbers where ‘n’ is passed to the function as an argument. Test your function by writing a main program.

#include<stdio.h>
int recsum(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n+recsum(n-1);
}
void main()
{
	int n,sum;
	printf("Enter the number: ");
	scanf("%d",&n);
	sum=recsum(n);
	printf("Sum of natural numbers = %d",sum);
}
