#include<stdio.h>
int main()
{
	int row,col,k=0;
	for(row=1;row<=4;row++)
	{
		printf("\n");
		for(col=1;col<=row;col++)
		printf("%d ",++k);
	}
	return 0;
}
