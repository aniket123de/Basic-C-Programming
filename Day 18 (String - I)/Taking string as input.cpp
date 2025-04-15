#include<stdio.h>
int main()
{
	// Taking String from User
	char r[10];
	printf("\n Enter your string(Only a word) : ");
	scanf("%s",r);
	printf("\n %s ",r);
	getchar();
	// To take whole sentence as input
	printf("\n Enter your string(Sentence) : ");
	scanf("%[^\n]s",r);
	printf("\n%s",r);
	getchar();
	return 0;
}
