#include<stdio.h>
int main() {
	int num,temp,count = 0;
	scanf("%d",&num);
	
	temp = num;
	while(temp!=0)
	{
	count++;
	temp/=10;
	
    }
    printf("\n Digits= %d",count);
return 0;
}

