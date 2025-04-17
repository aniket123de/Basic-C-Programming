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
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(x[i]>x[j])
			{
				temp = x[i];
				x[i]=x[j];
				x[j] = temp;
			}
	printf("\n After sorting : ");
	for(i=0;i<n;i++)
		printf("%5d",x[i]);
	return 0;
}
