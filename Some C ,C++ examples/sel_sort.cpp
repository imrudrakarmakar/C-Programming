#include<stdio.h>
#include<conio.h>
#define max 50

int main()

{
	int i, j, n, min, pos, temp, arr[max];
	printf("\n enter no. of elements: ");
	scanf("%d", &n);
	printf("\n enter elements:");
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
		
printf("\n sorted list is : \n");
for(i=1;i<=n-1;i++)
{
	min=arr[i];
	pos=i;
		for(j=i+1;j<=n;j++)
	{
		if(arr[j]<min)
		min=arr[j];
		pos=j;
	}
		temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
	}
	
	for (i=0;i<n;i++)
	printf("\n %d", arr[i]);
}
