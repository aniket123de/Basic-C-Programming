#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	int n;
	printf("Enter a String : ");
	scanf("%s",s);
	printf("%s",s);
	n=strlen(s);
	printf("\n");
	for(int i=(n-1);i>=0;i--)
	{
		printf("%c",s[i]);
	}
	printf("\n %s",s);
	return 0;
}
