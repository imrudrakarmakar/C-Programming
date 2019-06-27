//Write a program in C to print the multiplication table from 1 to N, where N is an integer which is user input.

#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter an integer: ");
	scanf("%d",&num);
	printf("Multiple table from 1 to %d \n",num);
	for(i=1;i<=num;i++)
	{
		printf("Table of %d: \n",i);
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d \n",j,i,j*i);
		}
	}
	return 0;
}
