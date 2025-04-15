/*How to declare 2D Array*/
#include<stdio.h>
int main()
{
	int arr[3][3];
	int row,col,arrsum=0,i=0;
	
	/*How to take values from user*/
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\n Enter a value : ");
			scanf("%d",&arr[row][col]);
		}
	}
	printf("\n");
	
	// How to print the array 
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",arr[row][col]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		arrsum=arrsum+arr[i][row-1-i];
		printf("\n");
	}
printf("%d ",arrsum);
	return 0;
}
