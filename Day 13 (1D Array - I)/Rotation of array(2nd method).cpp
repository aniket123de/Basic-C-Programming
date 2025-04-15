
#include<stdio.h>
int main()
{
	int arr[5],arr1[5],i,temp;

//Take values from the user.
for(i=0;i<5;i++)
	{
		printf("\n Enter a value: ");
		scanf("%d", &arr[i]);
	}	
temp=arr[4];
//Print Array Elements
for(i=0;i<4;i++)
	{
		arr1[i+1]=arr[i];

	}	
arr1[0]=temp;
for(i=0;i<5;i++){
	printf("  %d  ",arr1[i]);
}

	return 0;
}
