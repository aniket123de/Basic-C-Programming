#include<stdio.h>
int main()
{
	int row,col;
	for(row=5;row>=1;row--)
	{
		printf("\n");
		for(col=1;col<=row;col++)
		printf("%d",row);
	}
	return 0;
}
