//Write a C program to copy the contents of one file to another.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fo,*fc;
	char ch;
	fo=fopen("/home/RUDRA/Desktop/test.txt","r");
	if(fo==NULL)
	{
		printf("File not opened.");
		exit(0);
	}
	fc=fopen("/home/RUDRA/Desktop/target.txt","w");
	if(fc==NULL)
	{
		printf("File not opened.");
		fclose(fo);
		exit(0);
	}
	while(1)
	{
		ch=fgetc(fo);
		if(ch==EOF)
		{
			break;
		}
		fputc(ch,fc);
	}
	fclose(fo);
	fclose(fc);
	return 0;
}
