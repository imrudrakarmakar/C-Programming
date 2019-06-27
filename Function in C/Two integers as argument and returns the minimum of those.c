//Write a function in C to take two integers as argument and returns the minimum of those. Write a main function that asks the user for four integers and then outputs the minimum by using the above function.  

#include<stdio.h>
int minimum(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
void main()
{
	int a,b,min,min1;
	printf("Enter the 1st number ");
	scanf("%d",&a);
	printf("Enter the 2nd number ");
	scanf("%d",&b);
	min=minimum(a,b);
	printf("Enter the 3rd number ");
	scanf("%d",&a);
	printf("Enter the 4th number ");
	scanf("%d",&b);
	min1=minimum(a,b);
	min=minimum(min,min1);
	printf("Minimum number among the 4 numbers is = %d",min);
}
