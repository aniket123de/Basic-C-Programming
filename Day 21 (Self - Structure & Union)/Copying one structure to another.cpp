#include<stdio.h>

struct example
{
	int x;
	char *y;
	float z;
};

int main(void)
{
	struct example s1 = {10,"Ani",12.35};
	struct example s2;
	
	s2 = s1;
	
	printf("The contents of s1 : %d %c %f \n",s1.x,s1.y,s1.z);
	printf("The contents of s2 : %d %c %f \n",s2.x,s2.y,s2.z);
	return 0;
}
