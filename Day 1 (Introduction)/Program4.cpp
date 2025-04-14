#include<stdio.h>
int main()
{
	int a , b, sum, diff, multi, div;
	printf("Enter 2 numbers :");
	scanf("%d %d", &a,&b);
	sum = a+b;
	diff = a-b;
	multi = a*b;
	div = a/b;
	printf("\nSummation of given nos = %d",sum);
	printf("\nDifference of given nos = %d",diff);
	printf("\nMultiplication of given nos = %d",multi);
	printf("\nDivision of given nos = %d",div);
	return 0;
}
