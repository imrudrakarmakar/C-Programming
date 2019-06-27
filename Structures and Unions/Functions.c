/* Write a C program that uses functions to perform the following operations:
  i. Reading a complex number
  ii. Writing a complex number
  iii. Addition and subtraction of two complex numbers
  iv. Multiplication of two complex numbers.  
Note: represent complex number using a structure. */

#include<stdio.h>
struct complex
{
	float real,imag;
};
void add(struct complex *c1,struct complex *c2,struct complex *c3)
{
	c3->real=c1->real+c2->real;
	c3->imag=c1->imag+c2->imag;
	printf("Addition of two complex number : \n");
	printf("\t %f + %fi \n",c3->real,c3->imag);
}
void sub(struct complex *c1,struct complex *c2,struct complex *c3)
{
	c3->real=c1->real-c2->real;
	c3->imag=c1->imag-c2->imag;
	printf("Substraction of two complex number : \n");
	printf("\t %f + %fi \n",c3->real,c3->imag);
}
void multi(struct complex *c1,struct complex *c2,struct complex *c3)
{
	c3->real=(c1->real*c2->real)-(c1->imag*c2->imag);
	c3->imag=(c1->imag*c2->real)+(c1->real*c2->imag);
	printf("Multiplication of two complex number : \n");
	printf("\t %f + %fi \n",c3->real,c3->imag);
}
void main()
{
	struct complex c1,c2,c3;
	printf("Enter the 1st complex number ");
	scanf("%f %f",&c1.real,&c1.imag);
	printf("Enter the 2nd complex number ");
	scanf("%f %f",&c2.real,&c2.imag);
	add(&c1,&c2,&c3);
	sub(&c1,&c2,&c3);
	multi(&c1,&c2,&c3);
}
