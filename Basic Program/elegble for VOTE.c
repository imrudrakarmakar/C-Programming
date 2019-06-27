#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age;
	printf("Enter the AGE of Voter Canditate: ");
	scanf("%d",&age);
	if(age>18)
	printf("\n***Elegble for VOTE***");
	else
	printf("\n***NOT elegble for VOTE***");
	return 0;
}
