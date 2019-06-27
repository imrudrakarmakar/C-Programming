// Write a C function to copy a string from source to destination using pointers. 

#include<stdio.h>
void copy(char *s,char *d)
{
	while(*s!='\0')
	{
		*d++=*s++;
	}
	*d++='\0';	
}
void main()
{
	char source[100],dest[100];
	puts("Enter the string ");
	gets(source);
	copy(source,dest);
	puts("Copied String : ");
	puts(dest);
}
