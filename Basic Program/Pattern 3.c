/*Write a program to print the following pattern: 
      1
    2  3
  4   5   6*/

#include<stdio.h>
int main()
{
	int i,j,k,p=1;
	for(i=1;i<=5;i=i+2)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("  ");
			}
			else
			{
				printf("%d",p++);
			}
		}
		printf("\n");
	}
	return 0;
}
