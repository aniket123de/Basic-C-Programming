/*
A 
*/

#include<stdio.h>
int main()
{
	int n;
	int check = 1;
	printf("Enter the number ");
	scanf("%d",&n);
	if(n<=1)
	{
		printf("\n %d is prime",n);
		return 0;
	}
	for (int i = 2; i<n; i++)
	{
		if (n%i==0)
		{
			check =0;
			break;
		}
	}
	if (check==1)
	   printf("\n %d is Prime",n);
	else
	   printf("\n %d is not Prime",n);
	return 0;
	
}

