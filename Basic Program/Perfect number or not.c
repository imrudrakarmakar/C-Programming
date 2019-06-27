#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=2;i<sqrt(n);i++)
	{if(n%i==0)
	sum=sum+i+n/i;
	}
	if(n==sum)
	printf("Perfect number");
	else
	printf("Not Perfect number");
}
