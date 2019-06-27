/*Write a program to print the following pattern: 
  ABCDEFGFEDCBA
  ABCDEF FEDCBA
  ABCDE   EDCBA
  ABCD     DCBA
  ABC       CBA
  AB         BA
  A           A*/
  
  
  #include<stdio.h>
int main()
{
	char i,j,d;
	int p=1,k;
	for(i='G';i>='A';i--)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		if(i!='G')
		{
			for(k=1;k<=p;k++)
			{
				printf(" ");
			}
			p=p+2;
		}
		for(d=i;d>='A';d--)
		{
			if(d!='G')
			{
				printf("%c",d);
			}
		}
		printf("\n");
	}
	return 0;
}
