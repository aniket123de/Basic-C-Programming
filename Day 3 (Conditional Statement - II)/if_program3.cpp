//if_program3.c
#include<stdio.h>
int main()
{
	int a;
	printf("\n scanf() returns :: ");
	scanf("%d",&a);
	if(scanf("%d",&a)){
		printf("\nIf Statement");
	}
	else{
		printf("\n Else Statement");
	}
	else{
		printf("\n If Statement,");
	}
	printf("\n a=%d",a);
	return 0;
}

/*
a is a variable that will accept integer values.
but for ,
scanf("%d",&a) we give "Souvik" ,
scanf() can not perform successfully.
it will return 0.

In Turbo C++ Compiler ,
if u define
int a;
then any value can be assigned with in a;
this is called garbage value.

If we use other online compiler ,
if u define
int a;
then a will be initialised by 0.
*/
