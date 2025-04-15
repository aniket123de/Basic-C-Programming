/*How to declare 2D Array*/
#include<stdio.h>
int main()
{
	int arr[4][4],temparr[2][2];
	int row,col,temp;
	int i, n;
	printf("\n Total no. of rotations : ");
	scanf("%d",&n);
	
	/*How to take values from user*/
	for(row=0;row<4;row++)
	{
		for(col=0;col<4;col++)
		{
			printf("\n Enter a value : ");
			scanf("%d",&arr[row][col]);
		}
	}
	printf("\n");
	
	// How to print the array 
	for(row=0;row<4;row++)
	{
		for(col=0;col<4;col++)
		{
			printf("%d ",arr[row][col]);
		}
		printf("\n");
	}

	for(i=0;i<n;i++)
	{
		// Copying Block1 into temporary
		for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			temparr[row][col]=arr[row][col];
		}
	}
		// Swapping Block2 and temp
		for(row=0;row<2;row++)
		{
			for(col=0;col<2;col++)
			{
				temp=arr[row][col+2];
				arr[row][col+2]=temparr[row][col];
				temparr[row][col]=temp;
			}
		}
	    // Swapping Block3 and temp
		for(row=0;row<2;row++)
		{
			for(col=0;col<2;col++)
			{
				temp=arr[row+2][col+2];
				arr[row+2][col+2]=temparr[row][col];
				temparr[row][col]=temp;
			}
		}
		// Swapping Block4 and temp
		for(row=0;row<2;row++)
		{
			for(col=0;col<2;col++)
			{
				temp=arr[row+2][col];
				arr[row+2][col]=temparr[row][col];
				temparr[row][col]=temp;
			}
		}
	    // Swapping Block1 and temp
	    for(row=0;row<2;row++)
		{
			for(col=0;col<2;col++)
			{
				temp=arr[row][col];
				arr[row][col]=temparr[row][col];
				temparr[row][col]=temp;
			}
		}
		printf("\n");
		// Printing after rotation
		for(row=0;row<4;row++)
		{
			for(col=0;col<4;col++)
			{
				printf("%d ",arr[row][col]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
