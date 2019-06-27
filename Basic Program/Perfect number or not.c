//A perfect number is a positive number in which sum of all positive divisors excluding that number is equal to that number. For example, 8128 is a perfect number. WAP in C to accept a positive integer from user and check whether it is a perfect number or not. 

#include<stdio.h>
int main()
{
	int num,i,pre=0;
	printf("Enter any positive integer: ");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			pre=pre+i;
		}
	}
	if(pre==num)
	{
		printf("%d is perfect number",num);
	}
	else
	{
		printf("%d is not perfect nymber",num);
	}
	return 0;
}
