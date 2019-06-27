#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("\n Enter the co-ordinate of a point separate by blank space: ");
	scanf("%d%d",&x,&y);
	if(x>0){
		if(y>0)
		printf("\nQuadrant-1");
		else if(y<0)
		printf("\nQuadrant-4");
		else
		printf("\nX Axis");
	}
	else{
		if(x<0){
		if(y>0)
		printf("\nQuadrant-2");
		else if(y<0)
		printf("\nQuadrant-3");
		else
		printf("\nX Axis");	
	}
	else{
		if(y!=0)
		printf("\nY Axis");
		else
		printf("\nOrigin");
	}
}
	return 0;
}
