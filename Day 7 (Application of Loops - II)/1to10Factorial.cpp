#include<stdio.h>
int main()
{
	int num,i,fact=1;
	for (i=1;i<=10;i++)
	{
		fact = fact*i;
		printf("\n%d",fact);
	}
	
	return 0;
}
