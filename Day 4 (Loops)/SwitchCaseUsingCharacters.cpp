#include<stdio.h>
int main()
{
	char ch;
	switch(ch){
		default: printf("\nWrong choice"); break;
    	case 'b': printf("\n Monday"); break;
    	case 'a': printf("\n Sunday"); break;
    	case 'c': printf("\n Tuesday"); break;
	}
	return 0;
}

/*
1. Case value can not be duplicate.
2. switch() - Case value can be integer/character.
3. case value can not be a variable.
4. Case value can be in any order.
5. default is another case and can be placed anywhere.
6. Case value no need to be sequentially.


*/
