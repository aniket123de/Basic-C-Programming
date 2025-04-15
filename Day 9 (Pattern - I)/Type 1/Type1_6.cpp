#include<stdio.h>
int main()
{
	int row,col;
	for(row=4;row>=1;row--)
	{
		printf("\n");
		for(col=1;col<=4;col++)
		printf("%d",row);
	}
	return 0;
	
}
