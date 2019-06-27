#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct record
{int value;
struct record *next;
}QUEUENODE;
QUEUENODE *front=NULL,*rear=NULL;
void store(int x);
int retrieve();
main()
{
int val,prompt;
do{printf("\nPress<1> To STORE Data <2> To RETRIEVE data <0> To End:");
scanf("%d",&prompt);
switch(prompt)
{
case 1:printf("\nEnter value to store: ");
       scanf("%d",&val);
       store(val);
       break;
case 2:printf("\nRetrieved value=%d", retrieve());
       break;
case 0:break;
default:printf("\nEnter the correct choice");
}
}while(prompt!=0);
}
void store(int x)
{QUEUENODE *temp;
temp = (QUEUENODE*)malloc(sizeof(QUEUENODE));
if (temp==NULL)
{printf("\nQueue overflow");
return;
}
temp->value=x;
temp->next=NULL;
if(rear==NULL)
{front=temp;
rear=temp;
}
else
{rear->next=temp;
rear=rear->next;
}
}
int retrieve()
{QUEUENODE *temp;
int val;
if(front==NULL)
{printf("\nQueue Undeflow");
return 0;
}
val=front->value;
temp=front;
if(front==rear)
{front=NULL;
 rear=NULL;
 }
 else
 front=front->next;
 free(temp);
 return val;
 }
