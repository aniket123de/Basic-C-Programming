#include<stdio.h>
#include<math.h>
int main() {
	int num,temp,count = 0,sum = 0;
	printf("\n The Number is:");
	scanf("%d",&num);
	
	temp = num;
	while(temp!=0)
	{
	count++;
	temp/=10;
	
    }
    printf("\n Digits= %d",count);
    temp=num;  // 153 (let)
    while(temp!=0)    //              153!=0         | 15!=0                | 1!=0
    {
    	sum+= pow(temp%10,count);  // pow(3,3) = 27 | pow(5,3) =27+125=152 | pow(1,3) = 1+152=153
    	temp = temp/10;            // 15            | 1                    | 0
	}
	printf("\n Sum = %d",sum);  // 153
	if(sum==num)
	{
		printf("\n Armstrong Number");
	}
	else{
		printf("\n Not Armstrong Number");
	}
return 0;
}

/*
371 = 3**3 + 7**3 + 1**3 = 371
*/
