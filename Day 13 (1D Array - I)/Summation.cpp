/**/
#include<stdio.h>
int main()
{
	int arr[5],i,arrsum=0;

//Take values from the user.
for(i=0;i<5;i++)
	{
		printf("\n Enter a value: ");
		scanf("%d", &arr[i]);
	}	
	
//Print Array Elements
for(i=0;i<5;i++)
	{
		arrsum=arrsum+arr[i];
	}	
printf("Sum of Values = %d",arrsum);
	return 0;
}
