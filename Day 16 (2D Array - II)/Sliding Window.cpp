/*How to declare 2D Array*/
#include<stdio.h>
int main()
{
	int arr[4][4];
	int row,col,i=0,j=0;
	
	/*How to take values from user*/
	for(row=0;row<4;row++)
	{
		for(col=0;col<4;col++)
		{
			printf("\n Enter a value : ");
			scanf("%d",&arr[row][col]);
			printf("%d ",arr[row][col]);
		}
	}
	printf("\n");
	
	for(row=0;row<3;row++)
	{
		i=row;
		for(col=0;col<3;col++)
		{
			j=col;
			printf("\n %d %d ",arr[i][j],arr[i][j+1]);
			printf("\n %d %d \n",arr[i+1][j],arr[i+1][j+1]);
		//printf("\n %d %d   ,   %d %d",i,j,i,j+1);
		//printf("\n %d %d   ,   %d %d \n",i+1,j,i+1,j+1);
		}
    	printf("\n");
	}

	
	return 0;
}
