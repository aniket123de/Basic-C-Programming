#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter a number:");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		fact = fact*i;   // 1*1=1   1*2=2  2*3=6  64=24  24*5=120
	}
	printf("Factorial of %d = %d",num,fact);
	return 0;
}

/*
Factorial of 5
5! = 1*2*3*4*5
*/
