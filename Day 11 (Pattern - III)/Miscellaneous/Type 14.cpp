#include<stdio.h>
int main()
{
	int row,col,space,h;
	printf("Enter a Value:");
	scanf("%d",&h);
	for(row=1;row<=h;row++)
	{

		for(col=1;col<=(2*row-1);col++)
		printf("*");
		printf("\n");
	}
	for(row=(h-1);row>=1;row--)
	{

		for(col=1;col<=(2*row-1);col++)
		printf("*");
		printf("\n");
	}
	return 0;
}
