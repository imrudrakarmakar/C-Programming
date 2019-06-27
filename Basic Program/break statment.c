#include<stdio.h>
main()
{
	int count=0,num,sum=0;
	printf("Enter numbers to add.");
	while(1)
	{scanf("%d",&num);
	if(num<=0)
	break;
	sum+=num;
	++count;
	}
	printf("The sum of %d numbers is %d",count,sum);
	return 0;
}
