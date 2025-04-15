
#include<stdio.h>
int main()
{
	int n,i,temp,d,k;
	int arr[100];
	printf("Enter the Number of values");
	scanf("%d",&n);
	printf("Enter the Number of Rotation");
	scanf("%d",&d);

//Take values from the user.
for(i=0;i<n;i++)
	{
		printf("\n Enter a value: ");
		scanf("%d", &arr[i]);
	}
for(k=0;k<d;k++){
	temp=arr[n-1];
	for(i=(n-1);i>=0;i--)
		{
			arr[i+1]=arr[i];
	
		}	
arr[0]=temp;
}
printf("\n");
for(i=0;i<n;i++){
	printf("  %d  ",arr[i]);
}

	return 0;
}
