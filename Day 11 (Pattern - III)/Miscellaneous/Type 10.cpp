#include<stdio.h>
int main()
{
	int row,col,k=1;
	for(row=1;row<=4;row++)
	{
	
		for(col=1;col<=row;col++)
		{
			
			if(k%2==0)
			{
				printf("0");
			}
			else {
				printf("1");
			}
			++k;
		}
	printf("\n");
	}
	return 0;
}
