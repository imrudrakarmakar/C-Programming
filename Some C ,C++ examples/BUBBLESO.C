#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int bubble(int*,int);
void main()
{
  int *a,n,i;
  clrscr();
  printf("\nEmter the no. of elements you want to sort : ");
  scanf("%d",&n);
  a=(int*)malloc(n*sizeof(int));
  printf("\nEnter %d elements: \n",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  bubble(a,n);
  printf("\nThe sorted list is\n");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  free(a);
  getch();
}
bubble(int*a,int n)
{
 int i=0,flag=1,j,t;
 while(i<n && flag==1)
 {
       flag=0;
       for(j=0;j<n-1-i;j++)
  {
      if(a[j]>a[j+1])
      {
	   t=a[j];
	   a[j]=a[j+1];
	   a[j+1]=t;
	    flag=1;
       }
  }
      i++;
 }
return;
}

