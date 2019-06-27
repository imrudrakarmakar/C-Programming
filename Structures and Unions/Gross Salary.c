// Write a C program to compute the monthly pay of 100 employees using each employee’s name, basic pay. The DA is computed as 52% of the basic pay. Grosssalary (basic pay + DA). Print the employees name and gross salary. 

#include<stdio.h>
struct compute
{
	char name[30];
	float bp;
};
void main()
{
	struct compute std[100];
	int i;
	float da,gs;
	printf("Enter employee name and salaray \n");
	for(i=0;i<10;i++)
	{
		printf("");
		scanf("%s %f",std[i].name,&std[i].bp);
	}
	printf("Employee  Name  \t Gross  Salaray \n");
	for(i=0;i<10;i++)
	{
		da=std[i].bp*(52.0/100.0);
		gs=std[i].bp+da;
		printf("%s \t\t %f \n",std[i].name,gs);
	}
}
