#include<stdio.h>
#include<math.h>
int main()
{
	int ip,op,dec,dig,p;
	printf("Enter a Octal number ");
	scanf("%d",&ip);
	dec=0;p=0;
	while(ip>0)
	{dig=ip%10;
	dec=dec+dig*pow(8,p);
	ip=ip/10;p++;
	}
	op=0;p=0;
	while(dec>0)
	{dig=dec%2;
	op=op+dig*pow(10,p);
	p++;dec=dec/2;
	}
	printf("Binary number is : %d",op);
	return 0;
}
