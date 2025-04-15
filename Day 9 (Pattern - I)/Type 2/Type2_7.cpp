#include<stdio.h>
int main()
{
	int row,col;
	for(row=4;row>=1;row--)
	{
		printf("\n");
		for(col=4;col>=row;col--)
		printf("%d",col);
	}
	return 0;
}
