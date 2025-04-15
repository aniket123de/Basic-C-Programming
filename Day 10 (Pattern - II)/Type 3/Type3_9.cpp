#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=4;row++)
	{
		printf("\n");
		for(col=row;col<=4;col++)
		printf("%d",col);
	}
	return 0;
}
