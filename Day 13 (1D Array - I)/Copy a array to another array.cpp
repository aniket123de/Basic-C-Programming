#include<stdio.h>
int main()
{
	int arr1[5],arr2[5],i;

//Take values from the user.
for(i=0;i<5;i++)
	{
		printf("\n Enter a value: ");
		scanf("%d", &arr1[i]);
	}	
	
//Print Array Elements
for(i=0;i<5;i++)
	{
		arr2[i]=arr1[i];
		
	}
for(i=0;i<5;i++)
{
	printf("Elements of first array = %d\n",arr1[i]);
	printf("Elements of second array = %d\n",arr2[i]);
	
}
	return 0;
}
