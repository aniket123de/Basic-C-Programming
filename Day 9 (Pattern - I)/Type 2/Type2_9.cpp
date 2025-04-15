#include<stdio.h>
int main()
{
	int row,col;
	for(row=4;row>=1;row--)
	{
		printf("\n");
		for(col=4;col>=row;col--)
		printf("%c",col+64);
	}
	return 0;
} 
