//WAP in C to reverse the content of a character array.

#include<stdio.h>
int main()
{
	char c[100];
	int i,n;
	printf("Enter the length of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a character ");
		scanf("%c",&c[i]);
		scanf("%c",&c[i]);
	}
	printf("Reversed array :");
	for(i=n-1;i>=0;i--)
	{
		printf("%c,",c[i]);
	}
	return 0;
}
