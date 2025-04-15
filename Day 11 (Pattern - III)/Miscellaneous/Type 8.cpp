#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=4;row++)
	{
		printf("\n");
		for(col=1;col<=row;col++)
		{
			if (col%2==0){
				printf("0");
			}
			
			else {
				printf("1");
			}
		}
	
	}
	return 0;
}
