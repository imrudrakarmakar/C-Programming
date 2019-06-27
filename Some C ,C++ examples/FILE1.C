#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char letter;
clrscr();
fp=fopen("SREEPORNA.txt","r");
if(fp==NULL)
{
printf("\nCannot Open the file");
exit(1);
}
do
{letter=fgetc(fp);
if(letter==EOF)
break;
putchar(letter);
}while(1);
fclose(fp);
getch();
}
