//Write a program in C to accept any integer from the user and display whether the number is palindrome or not. 

#include<stdio.h>
int  main()
{
	int num,cpnum,rem,rev=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	cpnum=num;
	while(cpnum!=0)
	{
		rem=cpnum%10;
		rev=rev*10+rem;
		cpnum=cpnum/10;
	}
	if(num==rev)
	{
		printf("%d is palindrome",num);
	}
	else
	{
		printf("%d is not palindrome",num);
	}
}
