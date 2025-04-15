#include<stdio.h>
int main()
{
	int arr[10],arr1[5],arr2[5],arrlast[10],i;

//Take values from the user.
for(i=0;i<10;i++)
	{
		printf("\n Enter a value: ");
		scanf("%d", &arr[i]);
	}	
	

for(i=0;i<5;i++)
	{
		arr[i]=arr1[i];
		
	}
for(i=5;i<10;i++)
	{
		arr[i]=arr2[i];
		
	}
for(i=0;i<10;i++)
{
	printf("Elements of first array = %d\n",arr1[i]);
	printf("Elements of second array = %d\n",arr2[i]);
	
}
	return 0;
}
