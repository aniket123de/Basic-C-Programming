#include <stdio.h>
/* Add 2 numbers*/
int main()
{
	int num1, num2, add;
	printf("\n Enter a Number :");
	scanf("%d",&num1);
	printf("\n Enter another number ");
	scanf("%d",&num2);
	
	printf("\n You have entered = %d and %d", num1, num2);
	add = num1 + num2;
	printf("\n %d + %d = %d", num1, num2, add);
	return 0;
}

