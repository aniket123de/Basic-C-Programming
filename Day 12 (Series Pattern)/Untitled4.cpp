#include<stdio.h>
#include<math.h>
int main()
{
	int row,col,sum=0,rowsum;
	for(row=1;row<=2;row++)
	{
		printf("\n");
		printf("(");
		rowsum = 0;
		for(col=1;col<=row;col++){
			printf("%d^%d+",col,col+1);
			rowsum=rowsum+pow(col,col+1);
		}
		rowsum=pow(rowsum,row);
		sum=sum+rowsum;
	    printf("\b");
	    if (row!=2)
		printf(")^%d+",row);
		else {
			printf(")^%d=%d",row,sum);
		}
	    
	}
//	printf("=%d",sum);
	return 0;
}

