//Write a C program to read a file name at the command line and display number of words present in it. 

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	int c=0;
	fp=fopen(argv[1],"r");
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
		if(ch==' ')
		{
			ch=fgetc(fp);
			if(ch!=' ')
			{
				c++;
			}
		}
	}
	printf("Number of words = %d",c);
	fclose(fp);
	return 0;
}
