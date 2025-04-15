/*How to declare 2D Array*/
#include<stdio.h>
int main()
{
	int arr[3][3];
	int row,col,arrsum=0;
	
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
	
	for(row=0;row<3;row++)
	{
		arrsum=arrsum+arr[row][row];
		printf("\n");
	}
printf("%d ",arrsum);
	return 0;
}
