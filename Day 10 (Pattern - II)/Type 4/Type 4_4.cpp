#include<stdio.h>
int main()
{
	int row,col,space,h=1;
	for(row=5;row>=1;row--)
	{
		for(space=1;space<=row-1;space++)
		{
			printf(" ");
		}
		for(col=1;col<=h;col++)
		{
			printf("%d",row);
		}
		printf("\n");
	    h++;
	}
	return 0;
}
