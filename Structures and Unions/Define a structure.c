//Write a C program to define a structure named DOB, which contains name, day, month and year. Using the concept of nested structures display your name and date of birth. 

#include<stdio.h>
struct DOB
{
	char name[30],month[10];
	int day,year;
};
struct details
{
	struct DOB nes_std;
};
void main()
{
	struct details std={"Anubhav","June",27,1999};
	printf("Name \t \t Date \t Month \t Year \n");
	printf("%s \t %d \t %s \t %d \n",std.nes_std.name,std.nes_std.day,std.nes_std.month,std.nes_std.year);
}
