// Write a C program to read two numbers x,y at the command line and compute xy. 

#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i,a,b,pow=1;
	if(argc!=3)
	{
		printf("Wrong input.\n");
		return -1;
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	for(i=1;i<=b;i++)
	{
		pow=pow*a;
	}
	printf("Power of %d, %d is: %d\n",a,b,pow);
	
	return 0;
}
