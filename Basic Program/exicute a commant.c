#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("Is commant prosesor available");
	if(system)
	{
		printf("\nCommant prosesor available!");
	}
	else{
		printf("\nCommant prosesor is not available");
		exit(1);
	}
	printf("\nExecute command DIR\n");
	x=system("dir");
	printf("Returned value is %d \n",x);
	return 0;
}
