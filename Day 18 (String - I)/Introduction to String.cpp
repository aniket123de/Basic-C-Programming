/*
String in C : String is a character array ends with a null character , '\0' .
 
*/
#include<stdio.h>
int main()
{
	// Character Array
	char ch[5]={'a','b','c','d','e'};
	for(int i=0;i<5;i++)
	{
		printf("%c ",ch[i]);
	}
	
	// String
	char s[6]={'a','b','c','d','e','\0'};
	printf("\n%s",s);
	
	return 0;
}
