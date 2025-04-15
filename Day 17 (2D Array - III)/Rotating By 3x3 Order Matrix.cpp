/*How to declare 2D Array*/
#include<stdio.h>
int main()
{
	int arr[20][20],temparr[10][10];
	int row,col,temp;
	int i,n,p,m;
	printf("Enter the no. of Row and Columns : ");
	scanf("%d",&p);
	m=p/2;
	printf("\n Total no. of rotations : ");
	scanf("%d",&n);
	
	/*How to take values from user*/
	for(row=0;row<p;row++)
	{
		for(col=0;col<p;col++)
		{
			printf("\n Enter a value : ");
			scanf("%d",&arr[row][col]);
		}
	}
	printf("\n");
	
	// How to print the array 
	for(row=0;row<p;row++)
	{
		for(col=0;col<p;col++)
		{
			printf("%d ",arr[row][col]);
		}
		printf("\n");
	}

	for(i=0;i<n;i++)
	{
		// Copying Block1 into temporary
		for(row=0;row<m;row++)
	{
		for(col=0;col<m;col++)
		{
			temparr[row][col]=arr[row][col];
		}
	}
		// Swapping Block2 and temp
		for(row=0;row<m;row++)
		{
			for(col=0;col<m;col++)
			{
				temp=arr[row][col+m];
				arr[row][col+m]=temparr[row][col];
				temparr[row][col]=temp;
			}
		}
	    // Swapping Block3 and temp
		for(row=0;row<m;row++)
		{
			for(col=0;col<m;col++)
			{
				temp=arr[row+m][col+m];
				arr[row+m][col+m]=temparr[row][col];
				temparr[row][col]=temp;
			}
		}
		// Swapping Block4 and temp
		for(row=0;row<m;row++)
		{
			for(col=0;col<m;col++)
			{
				temp=arr[row+m][col];
				arr[row+m][col]=temparr[row][col];
				temparr[row][col]=temp;
			}
		}
	    // Swapping Block1 and temp
	    for(row=0;row<m;row++)
		{
			for(col=0;col<m;col++)
			{
				temp=arr[row][col];
				arr[row][col]=temparr[row][col];
				temparr[row][col]=temp;
			}
		}
		printf("\n");
		// Printing after rotation
		for(row=0;row<p;row++)
		{
			for(col=0;col<p;col++)
			{
				printf("%d ",arr[row][col]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
