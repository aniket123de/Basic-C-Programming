/*
Decrement concept exists in C of 2 types.
1. Pre-Decrement (decrement variable by 1 before semi-colon)
2. Post-Decrement (decrement variable by 1 after semi-colon)
*/

#include<stdio.h>
int main()
{
	int a,b;
	a = 10;
	b = 7;
	
	printf("\n The value of a = %d",a);
	a--;
	/*
	      The value of a is incremented by 1.
	      a=a-1;
	      a = 10-1;
	      a = 9;
	*/
	printf("\n The value of a = %d",a);
	--a;
	printf("\n The value of a = %d",a);
	
	printf("\n The value of b = %d",b);     // 7
	printf("\n The value of b = %d",b--);   // 7
	printf("\n The value of b = %d",b);    // 6
	printf("\n The value of b = %d",--b);   // 5
	printf("\n The value of b = %d",b);    // 5
	return 0;
}
