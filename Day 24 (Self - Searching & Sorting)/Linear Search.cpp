#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int n,x[50],s,i;
	printf("\nEnter no. of elements : ");
	scanf("%d",&n);
	printf("\nEnter Numbers : ");
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	printf("\nEnter the number to search : ");
	scanf("%d",&s);
	for(i=0;i<=n;i++)
	{
		if (s==x[i])
		{
			printf("\n%d is in the %dth position in the list",s,i+1);
			getch();
			exit(0);
		}
	}
	printf("\n The value is not present in the list !!");
	return 0;
}
