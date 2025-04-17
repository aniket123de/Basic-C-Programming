#include<stdio.h>
int main()
{
	int i,n,left,right,s,arr[100],mid;
	printf("\nEnter no. of elements : ");
	scanf("%d",&n);
	printf("\nEnter Numbers : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\nEnter the number to search : ");
	scanf("%d",&s);
	left = 0;
	right = n-1;
	mid = (left+right)/2;
	while (left<=right)
	{
		if(arr[mid]<s)
			left=mid+1;
		else if (arr[mid]==s)
			{
				printf("\n %d found at %dth position",s,mid+1);
				break;
			}
		else 
			right = mid-1;
		mid=(left+right)/2;
	}
	if (left>right)
		printf("Error !!");
	return 0;
}
