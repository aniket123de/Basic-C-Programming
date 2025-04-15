#include<stdio.h>
int main()
{
	int row,col,space;
	for(row=5;row>=1;row--)
	{
		for(space=1;space<=row-1;space++)
		{
			printf(" ");
		}
		for(col=5;col>=row;col--)
		{
			printf("%d",col);
		}
		printf("\n");
	}
	return 0;
}
