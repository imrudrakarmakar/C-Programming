/*The Fibonacci sequence is a sequence of numbers where the first two numbers are 0 and 1 and the next number in the sequence is the sum of the previous two numbers. The n’th number in the sequence can be calculated as:
f(1) = 0
f(2) = 1
f(n) = f(n − 1) + f(n − 2)
Write a C function with a parameter n that returns the n’th Fibonacci number. The function must be recursive, i.e., it should call itself.
Write a program that asks the user for a number n and then prints the n first numbers in the Fibonacci sequence. */

#include<stdio.h>
int fib(int n)
{
	if(n<2)
	{
		return n;
	}
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}
void main()
{
	int n,f;
	printf("Enter the number ");
	scanf("%d",&n);
	f=fib(n);
	printf("nth Fibonnaci number = %d",f);
}
