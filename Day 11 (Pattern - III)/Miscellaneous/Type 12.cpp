#include<stdio.h>
int main()
{
	int row,col,space,h=5;
	for(row=5;row>=1;row--)
	{
	for(space=1;space<=h-row;space++)
	{
		printf(" ");
	}
		for(col=1;col<=(2*row-1);col++)
		printf("*");
		printf("\n");
	}
	return 0;
}
