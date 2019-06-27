#include<stdio.h>
#include<string.h>
void ascending(char names[][20],int n);
void main()
{
	int num,i;
	char names[100][20];
	printf("\nEnter number of names in the list :");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\nEnter name %d: ",i);
		fflush(stdin);
		gets(names[i]);
	}
	ascending(names,num);
	printf("\nList of names in ascending order: ");
	for(i=0;i<num;i++)
	printf("\n%s",names[i]);
}
void ascending(char list[][20],int n)
{
	char temp[20];
	int i,j;
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(strcmp(list[i],list[j])>0)
		{
			strcpy(temp,list[i]);
			strcpy(list[i],list[j]);
			strcpy(list[j],temp);
		}
	}
}
