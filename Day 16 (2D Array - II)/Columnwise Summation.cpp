/*How to declare 2D Array*/
#include<stdio.h>
int main()
{
	int arr[2][3];
	int row,col,arrsum=0;
	
	/*How to take values from user*/
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\n Enter a value : ");
			scanf("%d",&arr[row][col]);
		}
	}
	printf("\n");
	
	// How to print the array 
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",arr[row][col]);
		}
		printf("\n");
	}
	
	for(col=0;col<3;col++)
	{
		for(row=0;row<2;row++)
		{
			arrsum=arrsum+arr[row][col];
		}
		printf("%d ",arrsum);
		arrsum=0;
		printf("\n");
	}

	
	return 0;
}
