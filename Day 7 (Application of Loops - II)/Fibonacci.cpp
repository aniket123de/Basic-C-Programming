#include<stdio.h>
int main() {
	int first = 0,second = 1,next=0,range;
	printf("Enter your range:");
	scanf("%d",&range);
	printf("%d %d ",first,second);
	while(1)  // infinite loop
	{
		next = first + second;  // 0+1=1
		if(next<range)
		{
			printf("%d ",next);
			first = second;
		    second = next;
		}
		else
		{
			break;
		}
	}
	
	return 0;
}
/*
0 1 1 2 3 5 8 13 21 34 55 ........
        F S N
          F S N

second/first number = 1.618(approx)
*/
