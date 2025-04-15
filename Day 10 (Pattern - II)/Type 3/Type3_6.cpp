#include<stdio.h>
int main()
{
	int row,col;
	for(col=5;col>=1;col--)
	{
		printf("\n");
		for(row=1;row<=col;row++)
		printf("%c",row+64);
	}
	return 0;
}

