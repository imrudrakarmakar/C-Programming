//Write a recursive function to return the factorial value of ‘n’, where ‘n’ is passed as argument. Write a main program to check your function. 

#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	return n*fact(n-1);
}
void main()
{
	int n,f;
	printf("Enter the number ");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial of %d is = %d",n,f);
}
