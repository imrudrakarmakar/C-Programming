#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct record
{int value;
struct record *next;
}NODE;
void append (int data);
void add_after_node(int pos,int data);
void del_begin();
void display();
void end();
NODE *start=NULL;
int main()
{
int prompt,data,num,pos;
do{printf("\n***************************************************************");
   printf("\n<1>To add a new node to list                                 **");
   printf("\n<2>to Add a new Node after a given node of the list          **");
   printf("\n<3>To delete a given node in the list                        **");
   printf("\n<4>To dispaly the list                                       **");
   printf("\n<0>to exit                                                   **");
   printf("\n***************************************************************");
   printf("\nEnter choice :");
   scanf("%d",&prompt);
   switch(prompt)
   {
   case 1:printf("\nEnter data");
	  scanf("%d",&data);
	  append(data);
	  break;
   case 2:printf("\nEnter position after which to insert a new node:");
	  scanf("%d",&data);
	  add_after_node(pos,data);
	  break;
   case 3:del_begin();
	  break;
   case 4:display();
	  break;
   case 0:end();
	  break;
   }
 }while(prompt!=0);
 fflush(stdin);
 getchar();
 return 0;
 }
 void append(int data)
 {
 NODE *temp, *curr;
 temp=(NODE*)malloc(sizeof(NODE));
 temp->value=data;
 temp->next=NULL;
 if(start==NULL)
 {printf("\n*****FIRST NODE OF THE LIST CREATED*****");
 start=temp;
 }
 else
 {curr=start;
 while(curr->next!=NULL)
      {curr=curr->next;}
      curr->next=temp;
      }
      }
 void display()
 {int count=0;
  NODE*curr=start;
  printf("\nCurrent List");
  if(curr==NULL)
  printf("\n***EMPTY LIST***");
  while(curr!=NULL)
  {printf("\nData%d",++count,curr->value);
  curr=curr->next;
  }
  }
void add_after_node(int pos,int data)
{NODE *curr=start, *temp;
while((pos>1) && (curr!=NULL))
{
curr=curr->next;
pos--;}
if(curr==NULL)
{printf("\nPosition is outside the list");
return;
}
temp=(NODE*)malloc(sizeof(NODE));
temp->value=data;
temp->next=curr->next;
curr->next=temp;
}
void del_begin()
{NODE *temp=start;
start=start->next;
free(temp);
}
void end ()
{while(start!=NULL)
del_begin();
}
