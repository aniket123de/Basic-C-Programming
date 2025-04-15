#include<stdio.h>
int main()
{
	int arr[5],i;

//Take values from the user.
for(i=0;i<5;i++)
	{
		printf("\n Enter a value: ");
		scanf("%d", &arr[i]);
	}	
	
//Print Array Elements
for(i=4;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}	
	return 0;
}
