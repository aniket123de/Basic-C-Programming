#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=5;row++)
	{
		printf("\n");
		for(col=5;col>=row;col--)
		printf("* ");
	}
	return 0;
}
