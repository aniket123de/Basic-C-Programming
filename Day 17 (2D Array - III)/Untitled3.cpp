/*How to declare 2D Array*/
#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3];
	int row,col;
	
	/*How to take values from user*/
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\n Enter a value for 1st Matrix : ");
			scanf("%d",&arr1[row][col]);
		}
	}
	printf("\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\n Enter a value for 2nd Matrix : ");
			scanf("%d",&arr2[row][col]);
		}
	}
	

	
	return 0;
}
