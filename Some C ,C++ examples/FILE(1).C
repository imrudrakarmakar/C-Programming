#include<stdio.h>


void main()
{
FILE *fp;
char letter;
fp=fopen("shreeparna.txt","w");
clrscr();
if(fp==NULL)
{
printf("\nCannotopen the file");
exit(1);
}
printf("\nEnter Name. Press ENTER to end: ");
do{ letter=getchar();
    if(letter=='\n')
       break;
    fputc(letter,fp);
    }
while(1);
fclose(fp);
}