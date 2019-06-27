//Write a C program to display the contents of a file. 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("/users/RUDRA/Desktop/test.txt","r");
	if(fp==NULL)
	{
		printf("File not opened.");
		exit(0);
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
