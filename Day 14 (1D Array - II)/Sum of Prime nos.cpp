
#include<stdio.h>
int isprime(int n){
	int i;
	for(i=2;i=n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
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
	for(i=2;i<5;i++)
		{
			if(isprime(i)==1)
				arrsum=arrsum+arr[i];
		}	
	printf("Sum of Values = %d",arrsum);
	return 0;
}
