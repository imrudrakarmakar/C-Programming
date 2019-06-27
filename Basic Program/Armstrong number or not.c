//Write a program in C to accept any integer from the user and display whether the number is a Armstrong number or not. 

#include<stdio.h>
int main()
{
	int num,cpnum,arm=0,rem=0;
	printf("Enter any positie integer: ");
	scanf("%d",&num);
	cpnum=num;
	while(cpnum!=0)
	{
		rem=cpnum%10;
		arm=arm+(rem*rem*rem);
		cpnum=cpnum/10;
	}
	if(num==arm)
	{
		printf("%d is Amstrong number",num);
	}
	else
	{
		printf("%d is not Amstrong number",num);
	}
	return 0;
}
