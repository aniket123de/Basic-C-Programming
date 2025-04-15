#include<stdio.h>
int main()
{
	int row,col,space,h=4;
	for(row=1;row<=4;row++)
	{
		for(space=1;space<=h-row;space++)
		{
			printf(" ");
		}
		for(col=1;col<=row;col++)
		{
			printf("%d",row);
		}
		printf("\n");
	
	}
	return 0;
}
