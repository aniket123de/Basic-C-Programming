#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],t[50];
	int n;
	printf("Enter a String : ");
	scanf("%[^\n]s",s);
	printf("\n %s",s);
	getchar();
	printf("\nEnter a String : ");
	scanf("%[^\n]s",t);
	printf("\n %s",t);
	n=strlen(s);
	
	for(int i=0;i<strlen(t);i++)
	{
		s[n+i]=t[i];
	}
	s[n+strlen(t)]='\0';
	printf("%s",s);
	return 0;
}
