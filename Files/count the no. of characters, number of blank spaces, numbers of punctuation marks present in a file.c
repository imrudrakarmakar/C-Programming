//Write a C program to count the no. of characters, number of blank spaces, numbers of punctuation marks (comma, full stop and semicolon) present in a file. 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	int c=0,s=0,p=0;
	fp=fopen("Users/RUDRA/Desktop/test.txt","r");
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
		else if(ch==' ')
		{
			s++;
		}
		else if(ch==',' || ch=='.' || ch==';')
		{
			p++;
		}
		else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
		{
			c++;
		}
		
	}	
	fclose(fp);
	printf("Number of characters = %d \n",c);
	printf("Number of blank spaces = %d \n",s);
	printf("Number of punctuation marks = %d \n",p);
	return 0;
}
