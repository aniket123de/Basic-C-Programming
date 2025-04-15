#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	int n,swap;
	char temp;
	printf("Enter a String : ");
	scanf("%[^\n]s",s);
	printf("\n %s",s);
	n=strlen(s);
	swap=n/2;
	printf("%d",n);
	printf("\n");
	// s=aniket
	// s=012345
	for(int i=0;i<swap;i++)
	{
		// Swap s[0] , s[5]
		// Swap s[1] , s[4]
		// Swap s[2], s[3]
		// swap s[i] , s[n-1-i]
		temp=s[i];
		s[i]=s[n-1-i];
		s[n-1-i]=temp;
	}
	printf("\n %s ",s);
	return 0;
}
