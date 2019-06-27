#include<stdio.h>
#include<conio.h>
int main()
{
int inputarray[100],elementcount,counter,num;
printf("Enter Number of Elements in Array:");
scanf("%d",&elementcount);
printf("Enter %d number \n",elementcount);
for(counter=0;counter<elementcount;counter++)
{
scanf("%d",&inputarray[counter]);	
}
printf("Enter a number to serach in Array:");
scanf("%d",&num);
for(counter=0;counter<elementcount;counter++)
{
	if(inputarray[counter]==num)
	{
		printf("Number %d found at index %d\n",num,counter);
		break;
	}
}
if(counter==elementcount)
{
	printf("Number %d Not Present in Input Array\n",num);
}
getch();return 0;
}
