#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],t[50];
	int n;
	printf("Enter a String : ");
	scanf("%[^\n]s",s);
	printf("\n %s",s);
	n=strlen(s);
	printf("%d",n);
	printf("\n");
	for(int i=(n-1);i>=0;i--)
	{
		t[i]=s[n-i-1];
	}
	t[n]='\0';
	printf("%s",t);
	return 0;
}
