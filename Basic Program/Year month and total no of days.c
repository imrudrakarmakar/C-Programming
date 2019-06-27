//Write a C program to input month number from user and print the corresponding month name and total number of days in that month (Use switch – case; Month February should have 29 days in leap years). 

#include<stdio.h>
int main()
{
	int yr,mt;
	printf("Enter a year: ");
	scanf("%d",&yr);
	printf("Enter a month(1 to 12): ");
	scanf("%d",&mt);
	switch(mt)
	{
		case 1: printf("January total no of day 31");
				break;
		case 2: if(yr%4 == 0)
				{
					if(yr%100 == 0)
					{
						if(yr%400 == 0)
						{
							printf("February total no of day 29");
						}
						else
						{
							printf("February total no of day 28");
						}
					}
					else
					{
						printf("February total no of day 29");
					}
				}
				else
				{
					printf("February total no of day 28");
				}
				break;
		case 3: printf("March total no of day 31");
				break;
		case 4: printf("April total no of day 30");
				break;
		case 5: printf("May total no of day 31");
				break;
		case 6: printf("June total no of day 30");
				break;		
		case 7: printf("July total no of day 31");
				break;		
		case 8: printf("August total no of day 31");
				break;		
		case 9: printf("September total no of day 30");
				break;
		case 10: printf("October total no of day 31");
				break;		
		case 11: printf("November total no of day 30");
				break;		
		case 12: printf("December total no of day 31");
				break;										
		default: printf("Please, enter a valid input!");
	}
}
