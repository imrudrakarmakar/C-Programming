#include<stdlib.h>
#include<stdio.h>

main()
{
	char name[50];
	int roll_no;
	FILE *fp;
	fp=fopen("student.txt","r");
	if(fp==NULL)
	{
		printf("/n the file has not opened");
		exit(1);
	}
	printf("Enter the name and roll number of the 	student:");
	fscanf(stdin,"%s %d",name,&roll_no);
	printf("name:%s\t roll no=%d",name ,roll_no);
	fscanf(fp,"%s %d",name,&roll_no);
	fclose(fp);
}

Output: 
xyz@linux-ulhd:~> gcc file.c
xyz@linux-ulhd:~> ./a.out
Enter the name and roll number of the student:
Asmita 01
name:Asmita	roll no=01 
