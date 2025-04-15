/*How to declare 1D Array*/
#include<stdio.h>
int main()
{
	int arr[5],i;
	//It means arr is an integer array of size 5.

//Take values from the user.
for(i=0;i<5;i++)
	{
		printf("\n Enter a value: ");
		scanf("%d", &arr[i]);
	}	
	
//Print Array Elements
for(i=0;i<5;i++)
	{
		printf("\n arr[%d]=%d and address = %u", i ,arr[i],&arr[i]);
	}	
	return 0;
}
