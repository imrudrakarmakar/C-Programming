// Create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as a function argument and print the book details. 

#include<stdio.h>
struct book
{
	char book_id[30],title[30],author_name[30];
	int price;
};
void display(struct book *std)
{
	printf("BOOK ID  \t\t\t TITLE \t\t\t\t\t AUTHOR NAME \t\t PRICE \n");
	printf("%s \t\t %s \t\t %s \t %d \n",std->book_id,std->title,std->author_name,std->price);
}
void main()
{
	struct book std={"ISBN 81-7656-706-X","DATA STRUCTURES THROUGH C","YASHAVANT KANETKAR",240};
	display(&std);
}
