/*How to declare 2D Array*/
#include<stdio.h>
int main()
{
	int arr1[2][3],arr2[3][2];
	int row,col;
	
	/*How to take values from user*/
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\n Enter a value : ");
			scanf("%d",&arr1[row][col]);
		}
	}
	printf("\n");
	
	// Printing Array1
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",arr1[row][col]);
		}
		printf("\n");
	}
// Copying Array1 to Array2
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			arr2[col][row]=arr1[row][col];
		}
	}
	// Printing Array2
	for(row=0;row<3;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",arr2[row][col]);
		}
		printf("\n");
	}

	
	return 0;
}
