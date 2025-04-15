
#include<stdio.h>
int main()
{
	int arr[5],i,temp;

//Take values from the user.
for(i=0;i<5;i++)
	{
		printf("\n Enter a value: ");
		scanf("%d", &arr[i]);
	}	
temp=arr[4];
//Print Array Elements
for(i=4;i>=0;i--)
	{
		arr[i+1]=arr[i];

	}	
arr[0]=temp;
for(i=0;i<5;i++){
	printf("  %d  ",arr[i]);
}

	return 0;
}
