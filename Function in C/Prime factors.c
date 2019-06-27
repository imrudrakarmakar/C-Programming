// A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.

#include<stdio.h>
void primefact(int n)
{
	int i,j,c=0;
	printf("Prime Fators are of %d are:\n",n);	
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			c=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					c++;
				}
			}
			if(c==2)
			{
				printf("%d,",i);
			}
			n=n/i;
		}
	}
}
void main()
{
	int n;
	printf("Enter the positive integer number ");
	scanf("%d",&n);
	if(n>0)
	{
		primefact(n);
	}
	else
	{
		printf("Wrong input.");
	}
}
