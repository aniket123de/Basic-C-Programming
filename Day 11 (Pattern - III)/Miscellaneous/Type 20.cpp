#include<stdio.h>
int main()
{
	int row,col,space,h;
	printf("Enter a Value:");
	scanf("%d",&h);
	for(row=1;row<=h;row++)
	{
        for(space=1;space<=h-row;space++){
        	printf(" ");
		}
		printf("*");
		for(space=1;space<=(2*row-3);space++){
			printf(" ");
		}
		if (row!=1){
			printf("*");
		}
		printf("\n");
	}
		for(row=h-1;row>=1;row--)
	{
        for(space=1;space<=h-row;space++){
        	printf(" ");
		}
		printf("*");
		for(space=1;space<=(2*row-3);space++){
			printf(" ");
		}
		if (row!=1){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
