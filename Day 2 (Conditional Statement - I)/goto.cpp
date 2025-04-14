#include<stdio.h>
int main ()
{
	printf("Line 1\n");
	printf("Line 2\n");
	printf("Line 3\n");
	if(5>4){
		goto L1;
	}
	printf("Line 4\n");
	printf("Line 5\n");
	L1:printf("Line 6\n");
	return 0;
}
