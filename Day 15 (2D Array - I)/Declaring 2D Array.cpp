/*How to declare 2D Array*/
#include<stdio.h>
int main()
{
	int arr[3][2];
	int row,col;
	
	/*How to take values from user*/
	for(row=0;row<3;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("\n Enter a value");
			scanf("%d",&arr[row][col]);
		}
	}
	printf("\n");
	
	// How to print the array 
	for(row=0;row<3;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",arr[row][col]);
		}
		printf("\n");
	}
	
	return 0;
}
