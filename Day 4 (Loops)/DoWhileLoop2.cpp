#include<stdio.h>
int main()
{
int a=10;
do{
	printf("%d",a);
	a++;
}
while(a<=3);
// Do-while is an exit-controlled loop

a=10;
while(a<=3){
	printf("%d",a);
	a++;
}
	
	return 0;
}
// While loop is an entry controlled loop
//that's why it doesn't give an output

/*
In case of for loop and while loop , condition is checked at the
entrypoint. So for loop and while loop is kmown as wntry controlled loop.

In case of do-while loop , condition is checked at the exitpoint,
so do-while loop is known as exit controlled loop.
*/
