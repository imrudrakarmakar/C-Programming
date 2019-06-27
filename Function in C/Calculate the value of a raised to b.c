//Write a function myPower( a, b ), to calculate the value of a raised to b. Test your function from main. 

#include<stdio.h>
int myPower(int a,int b)
{
	int i,f=1;
	for(i=1;i<=b;i++)
	{
		f=f*a;
	}
	return f;
}
void main()
{
	int a,b,pow;
	printf("Enter the number ");
	scanf("%d",&a);
	printf("Enter the power to which the number is to raised ");
	scanf("%d",&b);
	pow=myPower(a,b);
	printf("Final result = %d",pow);
}
