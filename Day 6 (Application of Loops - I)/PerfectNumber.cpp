#include<stdio.h>
int main()
{
	int n;
	int check = 1;
	printf("Enter the number ");
	scanf("%d",&n);
	int sum=0;
	for (int i = 1; i<=n/2; i++)
	{
		if (n%i==0)
		
		sum+=i;
		}
	}
	if (sum==n)
	   printf("\n Is perfect",);
	else
	   printf("\n Not Perfect",);
	return 0;
	
}

