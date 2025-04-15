#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=4;row++)
	{
		printf("\n");
		for(col=4;col>=row;col--)
		printf("%c",row+64);
	}
	return 0;
}
