 //Write a C program to read a file name at the command line and copy its content to a destination file read from command line as well. 

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	FILE *fo,*fc;
	char ch;
	int c=0;
	fo=fopen(argv[1],"r");
	if(fo==NULL)
	{
		printf("File not opened.");
		exit(0);
	}
	fc=fopen(argv[2],"w");
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
