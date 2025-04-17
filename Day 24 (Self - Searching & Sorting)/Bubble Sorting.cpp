#include<stdio.h>
int main()
{
	int i,n,j,temp,x[50];
	printf("\nEnter no. of elements : ");
	scanf("%d",&n);
	printf("\nEnter %d Numbers : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	printf("\n Before Sorting : ");
	for(i=0;i<n;i++)
		printf("%5d",x[i]);
	for(i=0;i<n-i;i++)
		for(j=0;j<(n-i)-1;j++)
			if(x[j]>x[j+1])
			{
				temp = x[j];
				x[j]=x[j+1];
				x[j+1] = temp;
			}
	printf("\n After sorting : ");
	for(i=0;i<n;i++)
		printf("%5d",x[i]);
	return 0;
}
