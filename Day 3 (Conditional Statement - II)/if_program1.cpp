//if_program1.c
#include <stdio.h>
int main()
{
	if(1){
		printf("Hello");
	}
	else{
		printf("Bye");
	}
		if(0){
		printf("Hello");
	}
	else{
		printf("Bye");
	}
		if(100){
		printf("Hello");
	}
	else{
		printf("Bye");
	}
	return 0;
}

/*
if(condition
{
}
condition value:
1:non-zero
[For any non-zero, condition will ne treated as 1.That means true.
2:zero
[for any zero , condition will be treated as 0.That means false.
*/

