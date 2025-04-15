#include<stdio.h>
#include<math.h>
int main()
{
	int row,col,sum=0;
	for(row=1;row<=5;row++)
	{
		printf("\n");
		printf("(");
		for(col=1;col<=row;col++){
			printf("%d^%d+",col,col);
			sum=sum+pow(col,col);
		}
	    printf("\b");
	    if (row!=5)
		printf(")+");
		else {
			printf(")=%d",sum);
		}
	}
//	printf("=%d",sum);
	return 0;
}

