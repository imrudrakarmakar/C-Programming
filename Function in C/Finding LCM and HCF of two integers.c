//Write functions for finding LCM and HCF of two integers. Each function has two numbers as parameters and returns the result. Write a main program that asks the user for numbers ‘a’ and ‘b’, and then use these numbers as arguments for your functions and print the result on the screen. 

#include<stdio.h>
void main()
{
	int num1,num2,lcm,hcf;
	printf("Enter the 1st number ");
	scanf("%d",&num1);
	printf("Enter the 2nd number ");
	scanf("%d",&num2);
	lcm=Lcm(num1,num2);
	hcf=Hcf(num1,num2);
	printf("L.C.M = %d\n",lcm);
	printf("H.C.F = %d\n",hcf);
}
int Lcm(int a,int b)
{
	int max,lcm;
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	while(1)
	{
		if(max%a==0 && max%b==0)
		{
			lcm=max;
			break;
		}
		max++;
	}
	return lcm;
}
int Hcf(int a,int b)
{
	int min,hcf,i;
	if(a<b)
	{
		min=a;
	}
	else
	{
		min=b;
	}
	for(i=min;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
		{
			hcf=i;
			break;
		}
	}
	return hcf;
}
