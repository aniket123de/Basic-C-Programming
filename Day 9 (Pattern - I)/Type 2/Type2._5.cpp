#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=4;row++)
	{
		printf("\n");
		for(col=1;col<=row;col++)
		printf("%c",col+64);
	}
	return 0;
}
