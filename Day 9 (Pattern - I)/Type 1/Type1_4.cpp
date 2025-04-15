#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=4;row++)
	{
		printf("\n");
		for(col=1;col<=4;col++)
		printf("%c",row+64);
	}
	return 0;
	
}
