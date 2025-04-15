#include<stdio.h>
int main()
{
	int row,col,space,h=3,k=0;
	for(row=1;row<=h;row++)
	{
	for(space=1;space<=h-row;space++)
	{
		printf(" ");
	}
		for(col=1;col<=(2*row-1);col++)
		printf("%d",++k);
		printf("\n");
	}
	return 0;
}
