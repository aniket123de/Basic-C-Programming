/*How to declare 2D Array*/
#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3];
	int row,col,arrsum=0;
	
	/*How to take values from user*/
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\n Enter a value for 1st Array : ");
			scanf("%d",&arr1[row][col]);
		}
	}
	printf("\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\n Enter a value for 2nd Array : ");
			scanf("%d",&arr2[row][col]);
		}
	}
	printf("\n");
	
	// How to print the array 
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",arr1[row][col]);
		}
		printf("\n");
	}
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",arr2[row][col]);
		}
		printf("\n");
	}
	// Summation of 2 arrays
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",arr1[row][col]+arr2[row][col]);
		}
	
		printf("\n");
	}
	
	return 0;
}
