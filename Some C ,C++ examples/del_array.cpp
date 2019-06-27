#include<stdio.h>
int main()
{
	int arr[100];
	int i, n, pos;
	
	printf("enter size of array : ");
	scanf("%d",&n);

	printf("enter elements in the array : ");
	for(i=0;i<n;i++)
	{
	scanf("%d", &arr[i]);
	}
	printf("enter the postion you want to del :");
	scanf("%d", &pos);
	
	if (pos==n+1|| pos<0)
	{
		printf("invalid position!");
	}
		else
		{
			for(i=pos-1; i<n-1; i++)
			{
				arr[i]=arr[i+1];
			}
				n--;
		}
			printf("elements in the array after deletion is :");
			for(i=0;i<n;i++)
			{
				printf("%d", arr[i]);				
			}
				return 0;
}
