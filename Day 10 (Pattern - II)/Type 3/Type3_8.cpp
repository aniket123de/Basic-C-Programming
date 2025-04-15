#include<stdio.h>
int main()
{
	int row,col;
	for(col=1;col<=5;col++)
	{
		printf("\n");
		for(row=5;row>=col;row--)
		printf("%c",row+64);
	}
	return 0;
}

